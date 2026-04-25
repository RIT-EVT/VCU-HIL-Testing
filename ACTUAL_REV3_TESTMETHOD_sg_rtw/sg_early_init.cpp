#include "ACTUAL_REV3_TESTMETHOD.h"
#include "ACTUAL_REV3_TESTMETHOD_private.h"
#include "sg_printf.h"
#include "sg_early_init.h"
#include "simstruc.h" // This is required if there are no S-function blocks in the model

static RTWSfcnInfo sgEarlyInitSfcnInfo;
struct _ssBlkInfo2 sgEarlyInitBlkInfo2 = {.rtwSfcnInfo = &sgEarlyInitSfcnInfo};

void sg_init_sfcns(void)
{
    sg_printf(sg_debug, "Initializing [EARLY INIT] S-functions\n");
    
    rtssSetErrorStatusPtr(&sgEarlyInitSfcnInfo, (&rtmGetErrorStatus(ACTUAL_REV3_TESTMETHOD_M)));
    sg_early_init_set_blkInfo2((void*)&sgEarlyInitBlkInfo2);
    
    {
        int32_t ErrCode;
        uint32_t *bitstream = NULL;
        uint8_t *fpgacode = NULL;
        char *devname;
        sg_fpga_io3xxModuleIdT  moduleId;
        static char mcsBinFile[200];
        static char msg[500];

        sg_initModelRun();

        // Determine path to bitstream file
        if (sg_getModelBaseDir(mcsBinFile, sizeof(mcsBinFile))) {
            sprintf(msg, "Could not determine location of the model on the target machine.");
            rtmSetErrorStatus(ACTUAL_REV3_TESTMETHOD_M, msg);
            return;
        }
        if ((strlen(mcsBinFile) + strlen("/fpga/speedgoat_IO397_HIL.mcs") + 1) > sizeof(mcsBinFile)) {
            sprintf(msg, "Path to the bitstream (model name + bitstream name) is too long.");
            rtmSetErrorStatus(ACTUAL_REV3_TESTMETHOD_M, msg);
            return;
        }
        strcat(mcsBinFile, "/fpga/speedgoat_IO397_HIL.mcs");
        SG_PRINTF(DEBUG, "Bitstream: %s\n", mcsBinFile);

            uint32_t i;
            FILE *mcs;
            // Read bitstream file
            if ((mcs = fopen(mcsBinFile, "r")) == NULL){
                sprintf(msg, "Bitstream file not found at %s\n", mcsBinFile);
                rtmSetErrorStatus(ACTUAL_REV3_TESTMETHOD_M, msg);
                SG_PRINTF(ERROR,msg);
                return; 
            }
            bitstream = (uint32_t *) malloc(2192012*sizeof(uint32_t));
            fpgacode = (uint8_t *) malloc(2192012*sizeof(uint8_t));
            for(i = 0; i<2192012; i++){
                fscanf(mcs, "%d\n", &bitstream[i]);
                fpgacode[i] = bitstream[i];
            }
            fclose(mcs);

        // Get module IDs (PIC info)
        SG_PRINTF(INFO,"Getting module information.\n");
        ErrCode = (int32_t)sg_fpga_IO3xxGetModuleId(39750, &moduleId);

        if (ErrCode >= 0)
        {
            devname = moduleId.devname;
        
            SG_PRINTF(DEBUG, "boardType: %d\n", 39750);
            SG_PRINTF(DEBUG, "ErrCode: %d\n", ErrCode);
            SG_PRINTF(DEBUG, "******************************************\n");
            SG_PRINTF(DEBUG, "moduleId->devname: %s\n", moduleId.devname);
            SG_PRINTF(DEBUG, "moduleId->vendorid: 0x%x\n", moduleId.vendorid);
            SG_PRINTF(DEBUG, "moduleId->subvendorid: 0x%x\n", moduleId.subvendorid);
            SG_PRINTF(DEBUG, "moduleId->deviceid: 0x%x\n", moduleId.deviceid);
            SG_PRINTF(DEBUG, "moduleId->subdeviceid: 0x%x\n", moduleId.subdeviceid);
            SG_PRINTF(DEBUG, "moduleId.moduleArchitecture: %d\n", moduleId.moduleArchitecture);
        }
        else
        {
            sprintf(msg, "Setup block: board type unknown.");
            rtmSetErrorStatus(ACTUAL_REV3_TESTMETHOD_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
        }
        // Call the programming function
        SG_PRINTF(INFO,"Running board specific programming file.\n");
            ErrCode = IO39x_programmFPGA(devname, (int16_t)-1, (int16_t)-1,
                (int32_t)1, (int32_t)1,
                (uint32_t)2192012, fpgacode, (uint32_t)85, &moduleId);

        // Set board type (by now the board is registered)
        io3xxSetBoardTypeSgLib(1, 39750);

        // Free the bitstream allocation
        free(bitstream);
        free(fpgacode);

        // Handle any error states
        if (ErrCode)
        {
            switch (ErrCode)
            {
                case BOARD_NOT_FOUND:
                    // reason for this error can be found in the pSgErrorStr (error message from sg-lib (sg_findPciDevice))
                    sprintf(msg, "%s", pSgErrorStr);

                case EEPROM_ERROR:
                    sprintf(msg, "Setup block %s: Error updating board EEPROM.\n", devname);

                case REPROG_ERROR:
                    sprintf(msg, "Setup block %s: Error writing new bitstream to FPGA.\n", devname);

                case FLASH_ERROR:
                    sprintf(msg, "Setup block %s: Bitstream flash storage error.\n", devname);

                case BIST_ERROR:
                    sprintf(msg, "Setup block %s: Built in self test error.\n", devname);

                case ICAP_RECONF_FAILED:
                    sprintf(msg, "Setup block %s: ICAP Reconfiguration was not successful.\n",devname);

                case BOARD_TYPE_UNKNOWN:
                    sprintf(msg, "Setup block %s: The board type selected is unknown.\n",devname);
                
                case DMA_SETUP_ERROR:
                    sprintf(msg, "Setup block %s: Error during DMA setup.\n",devname);

                default:
                    sprintf(msg, "Setup block %s: An unknown error %d occurred.\n", devname, ErrCode);
            }
            rtmSetErrorStatus(ACTUAL_REV3_TESTMETHOD_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
        }
        
        // ------------------------------------------------------------------------------------------------------
        // i/o extension callbacks
        // ------------------------------------------------------------------------------------------------------

        // check and decide whether the i/o extension interface uses the old wrapper with i2c or if the design
        // implements the axi i2c ip core

        // check if the bitstream has the axi iic ip cores for p14

        // call the i/o extension init functions

        // initial settings on module registry        
        // Set all DIO's to registry inital values (all input, all output states = 0, all sources = codemodule)
            sg_fpga_io3xx_initDioLines(1, SG_FPGA_IO3XX_BAR2);

        // DMA Engine and DMA Controller settings
        ScatterGatherDmaState *sgDmaSharedState;
        sg_fpga_io3xx_getSharedSgDmaState(1, &sgDmaSharedState);
        sgDmaSharedState->enableDma             = 0;
        sgDmaSharedState->useFpgaDmaController  = 0;

        sgDmaSharedState->dmaTriggerTimeTicks   = (uint32_t)(0.001000 * 75000000.000000);
        sgDmaSharedState->dmaTriggerSourceSel   = 0;
        sgDmaSharedState->dmaModeSequential     = 1;
        sgDmaSharedState->dmaModeParallel       = 0;

        // set FPGA frequency and sample time
        modelTimings_t *modelTimingsPtr;
        sg_fpga_io3xx_getSharedTimingInfo(1, &modelTimingsPtr);
        modelTimingsPtr->fpgaFrequency = 75000000.000000;
        modelTimingsPtr->sampleTime = 0.001000;

    }
    
    // Level2 S-Function Block: ACTUAL_REV3_TESTMETHOD/<Root>/CAN and LIN Setup  (sg_CANLIN_OfA2_setup_s)
    {
        SimStruct *rts = &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.childSFunctions[2];
        rts->blkInfo.blkInfo2 = (struct _ssBlkInfo2*)sg_early_init_get_blkInfo2();
        mxArray **sfcnParams = (mxArray **)
        &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
        ACTUAL_REV3_TESTMETHOD_cal->CANandLINSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
        ACTUAL_REV3_TESTMETHOD_cal->CANandLINSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
        ACTUAL_REV3_TESTMETHOD_cal->CANandLINSetup_P3_Size);
        sg_CANLIN_OfA2_setup_s(rts);
        sfcnStart(rts);
        if (ssGetErrorStatus(rts) != (NULL))
            return;
    }
}

__attribute__((constructor)) void early_init_setup(void)
{
    sg_register_early_init_function(sg_init_sfcns);
}
