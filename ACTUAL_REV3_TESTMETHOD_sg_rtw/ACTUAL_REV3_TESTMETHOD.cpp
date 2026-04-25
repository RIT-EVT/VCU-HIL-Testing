/*
 * ACTUAL_REV3_TESTMETHOD.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ACTUAL_REV3_TESTMETHOD".
 *
 * Model version              : 1.2
 * Simulink Coder version : 25.2 (R2025b) 28-Jul-2025
 * C++ source code generated on : Fri Apr 24 22:58:16 2026
 *
 * Target selection: speedgoat.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ACTUAL_REV3_TESTMETHOD.h"
#include "ACTUAL_REV3_TESTMETHOD_cal.h"
#include "ACTUAL_REV3_TESTMETHOD_private.h"
#include <cstring>

extern "C"
{

#include "rt_nonfinite.h"

}

/* Block signals (default storage) */
B_ACTUAL_REV3_TESTMETHOD_T ACTUAL_REV3_TESTMETHOD_B;

/* Block states (default storage) */
DW_ACTUAL_REV3_TESTMETHOD_T ACTUAL_REV3_TESTMETHOD_DW;

/* Real-time model */
RT_MODEL_ACTUAL_REV3_TESTMETHOD_T ACTUAL_REV3_TESTMETHOD_M_ =
  RT_MODEL_ACTUAL_REV3_TESTMETHOD_T();
RT_MODEL_ACTUAL_REV3_TESTMETHOD_T *const ACTUAL_REV3_TESTMETHOD_M =
  &ACTUAL_REV3_TESTMETHOD_M_;

/* Model step function for TID0 */
void ACTUAL_REV3_TESTMETHOD_step0(void) /* Sample time: [0.001s, 0.0s] */
{
  {
    /* user code (Output function Header for TID0) */
    {
      static char msg[500];
    }

    /* S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */

    /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
    {
      SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[2];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<Root>/Constant1' */
    ACTUAL_REV3_TESTMETHOD_B.Constant1 =
      ACTUAL_REV3_TESTMETHOD_cal->Constant1_Value;

    /* Constant: '<Root>/Constant' */
    ACTUAL_REV3_TESTMETHOD_B.Constant =
      ACTUAL_REV3_TESTMETHOD_cal->Constant_Value;

    /* S-Function (sg_fpga_IO397_da): '<Root>/IO397 Analog Output1' */

    /* Level2 S-Function Block: '<Root>/IO397 Analog Output1' (sg_fpga_IO397_da) */
    {
      SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[3];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sg_fpga_IO397_ad): '<Root>/IO397 Analog Input' */

    /* Level2 S-Function Block: '<Root>/IO397 Analog Input' (sg_fpga_IO397_ad) */
    {
      SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[4];
      sfcnOutputs(rts,0);
    }

    /* user code (Output function Trailer for TID0) */
    {
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ACTUAL_REV3_TESTMETHOD_M->Timing.clockTick0)) {
    ++ACTUAL_REV3_TESTMETHOD_M->Timing.clockTickH0;
  }

  ACTUAL_REV3_TESTMETHOD_M->Timing.t[0] =
    ACTUAL_REV3_TESTMETHOD_M->Timing.clockTick0 *
    ACTUAL_REV3_TESTMETHOD_M->Timing.stepSize0 +
    ACTUAL_REV3_TESTMETHOD_M->Timing.clockTickH0 *
    ACTUAL_REV3_TESTMETHOD_M->Timing.stepSize0 * 4294967296.0;
}

/* Model step function for TID1 */
void ACTUAL_REV3_TESTMETHOD_step1(void) /* Sample time: [0.01s, 0.0s] */
{
  /* Outputs for Atomic SubSystem: '<Root>/While Iterator Subsystem' */

  /* S-Function (scanpack): '<S1>/CAN Pack' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   *  Constant: '<Root>/Constant5'
   */
  /* S-Function (scanpack): '<S1>/CAN Pack' */
  ACTUAL_REV3_TESTMETHOD_B.CANPack.ID = 208U;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Length = 8U;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Extended = 0U;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Remote = 0;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[0] = 0;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[1] = 0;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[2] = 0;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[3] = 0;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[4] = 0;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[5] = 0;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[6] = 0;
  ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = ACTUAL_REV3_TESTMETHOD_cal->Constant2_Value;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[2] =
              ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[2] | (uint8_T)((uint16_T)
              (packedValue & (uint16_T)0xFFU));
            ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[3] =
              ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[3] | (uint8_T)((uint16_T)
              ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 48
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = ACTUAL_REV3_TESTMETHOD_cal->Constant4_Value;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[6] =
              ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[6] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 49
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = ACTUAL_REV3_TESTMETHOD_cal->Constant5_Value;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[6] =
              ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[6] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = ACTUAL_REV3_TESTMETHOD_cal->Constant3_Value;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[0] =
              ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[0] | (uint8_T)((uint16_T)
              (packedValue & (uint16_T)0xFFU));
            ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[1] =
              ACTUAL_REV3_TESTMETHOD_B.CANPack.Data[1] | (uint8_T)((uint16_T)
              ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }
  }

  /* S-Function (sg_CAN_OfA2_write_s): '<S1>/CAN Write ' */

  /* Level2 S-Function Block: '<S1>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[0];
    sfcnOutputs(rts,1);
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */

  /* Outputs for Atomic SubSystem: '<Root>/While Iterator Subsystem1' */

  /* S-Function (sg_CAN_OfA2_read_s): '<S2>/CAN Read ' */

  /* Level2 S-Function Block: '<S2>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[1];
    sfcnOutputs(rts,1);
  }

  /* S-Function (scanunpack): '<S2>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S2>/CAN Unpack' */
    if ((8 == ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Length) &&
        (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.ID != INVALID_CAN_ID) ) {
      if ((192 == ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.ID) && (0U ==
           ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 32
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[4]) & (uint8_T)
                    (0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              ACTUAL_REV3_TESTMETHOD_B.CANUnpack_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 41
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[5]) & (uint8_T)
                    (0x2U)) >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              ACTUAL_REV3_TESTMETHOD_B.CANUnpack_o2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 40
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[5]) & (uint8_T)
                    (0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              ACTUAL_REV3_TESTMETHOD_B.CANUnpack_o3 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 44
           *  length                  = 4
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[5]) & (uint8_T)
                    (0xF0U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              ACTUAL_REV3_TESTMETHOD_B.CANUnpack_o4 = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 16
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[3]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              ACTUAL_REV3_TESTMETHOD_B.CANUnpack_o5 = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 42
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[5]) & (uint8_T)
                    (0x4U)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              ACTUAL_REV3_TESTMETHOD_B.CANUnpack_o6 = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 0
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.1
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[0]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[1]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              result = result * 0.1;
              ACTUAL_REV3_TESTMETHOD_B.CANUnpack_o7 = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 48
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.1
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[6]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (ACTUAL_REV3_TESTMETHOD_B.CANRead_o2.Data[7]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              result = result * 0.1;
              ACTUAL_REV3_TESTMETHOD_B.CANUnpack_o8 = result;
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem1' */

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ACTUAL_REV3_TESTMETHOD_M->Timing.clockTick1)) {
    ++ACTUAL_REV3_TESTMETHOD_M->Timing.clockTickH1;
  }

  ACTUAL_REV3_TESTMETHOD_M->Timing.t[1] =
    ACTUAL_REV3_TESTMETHOD_M->Timing.clockTick1 *
    ACTUAL_REV3_TESTMETHOD_M->Timing.stepSize1 +
    ACTUAL_REV3_TESTMETHOD_M->Timing.clockTickH1 *
    ACTUAL_REV3_TESTMETHOD_M->Timing.stepSize1 * 4294967296.0;
}

/* Model initialize function */
void ACTUAL_REV3_TESTMETHOD_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Set task counter limit used by the static main program */
  (ACTUAL_REV3_TESTMETHOD_M)->Timing.TaskCounters.cLimit[0] = 1;
  (ACTUAL_REV3_TESTMETHOD_M)->Timing.TaskCounters.cLimit[1] = 10;
  rtsiSetSolverName(&ACTUAL_REV3_TESTMETHOD_M->solverInfo,"FixedStepDiscrete");
  ACTUAL_REV3_TESTMETHOD_M->solverInfoPtr =
    (&ACTUAL_REV3_TESTMETHOD_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ACTUAL_REV3_TESTMETHOD_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    ACTUAL_REV3_TESTMETHOD_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ACTUAL_REV3_TESTMETHOD_M->Timing.sampleTimes =
      (&ACTUAL_REV3_TESTMETHOD_M->Timing.sampleTimesArray[0]);
    ACTUAL_REV3_TESTMETHOD_M->Timing.offsetTimes =
      (&ACTUAL_REV3_TESTMETHOD_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ACTUAL_REV3_TESTMETHOD_M->Timing.sampleTimes[0] = (0.001);
    ACTUAL_REV3_TESTMETHOD_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    ACTUAL_REV3_TESTMETHOD_M->Timing.offsetTimes[0] = (0.0);
    ACTUAL_REV3_TESTMETHOD_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(ACTUAL_REV3_TESTMETHOD_M, &ACTUAL_REV3_TESTMETHOD_M->Timing.tArray
             [0]);

  {
    int_T *mdlSampleHits = ACTUAL_REV3_TESTMETHOD_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      ACTUAL_REV3_TESTMETHOD_M->Timing.perTaskSampleHitsArray;
    ACTUAL_REV3_TESTMETHOD_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits
      [0]);
    mdlSampleHits[0] = 1;
    ACTUAL_REV3_TESTMETHOD_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ACTUAL_REV3_TESTMETHOD_M, -1);
  ACTUAL_REV3_TESTMETHOD_M->Timing.stepSize0 = 0.001;
  ACTUAL_REV3_TESTMETHOD_M->Timing.stepSize1 = 0.01;
  ACTUAL_REV3_TESTMETHOD_M->solverInfoPtr =
    (&ACTUAL_REV3_TESTMETHOD_M->solverInfo);
  ACTUAL_REV3_TESTMETHOD_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&ACTUAL_REV3_TESTMETHOD_M->solverInfo, 0.001);
  rtsiSetSolverMode(&ACTUAL_REV3_TESTMETHOD_M->solverInfo,
                    SOLVER_MODE_MULTITASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&ACTUAL_REV3_TESTMETHOD_B)), 0,
                     sizeof(B_ACTUAL_REV3_TESTMETHOD_T));

  {
    ACTUAL_REV3_TESTMETHOD_B.CANRead_o2 = CAN_DATATYPE_GROUND;
    ACTUAL_REV3_TESTMETHOD_B.CANPack = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&ACTUAL_REV3_TESTMETHOD_DW), 0,
                     sizeof(DW_ACTUAL_REV3_TESTMETHOD_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.sfcnInfo;
    ACTUAL_REV3_TESTMETHOD_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(ACTUAL_REV3_TESTMETHOD_M)));
    ACTUAL_REV3_TESTMETHOD_M->Sizes.numSampTimes = (2);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &ACTUAL_REV3_TESTMETHOD_M->Sizes.numSampTimes);
    ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.taskTimePtrs[0] = (&rtmGetTPtr
      (ACTUAL_REV3_TESTMETHOD_M)[0]);
    ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.taskTimePtrs[1] = (&rtmGetTPtr
      (ACTUAL_REV3_TESTMETHOD_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(ACTUAL_REV3_TESTMETHOD_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(ACTUAL_REV3_TESTMETHOD_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (ACTUAL_REV3_TESTMETHOD_M));
    rtssSetStepSizePtr(sfcnInfo, &ACTUAL_REV3_TESTMETHOD_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (ACTUAL_REV3_TESTMETHOD_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &ACTUAL_REV3_TESTMETHOD_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &ACTUAL_REV3_TESTMETHOD_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &ACTUAL_REV3_TESTMETHOD_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &ACTUAL_REV3_TESTMETHOD_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &ACTUAL_REV3_TESTMETHOD_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &ACTUAL_REV3_TESTMETHOD_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &ACTUAL_REV3_TESTMETHOD_M->solverInfoPtr);
  }

  ACTUAL_REV3_TESTMETHOD_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       5*sizeof(SimStruct));
    ACTUAL_REV3_TESTMETHOD_M->childSfunctions =
      (&ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        ACTUAL_REV3_TESTMETHOD_M->childSfunctions[i] =
          (&ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: ACTUAL_REV3_TESTMETHOD/<S1>/CAN Write  (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ACTUAL_REV3_TESTMETHOD_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &ACTUAL_REV3_TESTMETHOD_B.CANPack);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write ");
      ssSetPath(rts,
                "ACTUAL_REV3_TESTMETHOD/While Iterator Subsystem/CAN Write ");
      ssSetRTModel(rts,ACTUAL_REV3_TESTMETHOD_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->CANWrite_P1_Size);
      }

      /* registration */
      sg_CAN_OfA2_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: ACTUAL_REV3_TESTMETHOD/<S2>/CAN Read  (sg_CAN_OfA2_read_s) */
    {
      SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ACTUAL_REV3_TESTMETHOD_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &ACTUAL_REV3_TESTMETHOD_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &ACTUAL_REV3_TESTMETHOD_B.CANRead_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read ");
      ssSetPath(rts,
                "ACTUAL_REV3_TESTMETHOD/While Iterator Subsystem1/CAN Read ");
      ssSetRTModel(rts,ACTUAL_REV3_TESTMETHOD_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->CANRead_P1_Size);
      }

      /* registration */
      sg_CAN_OfA2_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: ACTUAL_REV3_TESTMETHOD/<Root>/CAN and LIN Setup  (sg_CANLIN_OfA2_setup_s) */
    {
      SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ACTUAL_REV3_TESTMETHOD_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* path info */
      ssSetModelName(rts, "CAN and LIN Setup ");
      ssSetPath(rts, "ACTUAL_REV3_TESTMETHOD/CAN and LIN Setup ");
      ssSetRTModel(rts,ACTUAL_REV3_TESTMETHOD_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
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
      }

      /* registration */
      sg_CANLIN_OfA2_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: ACTUAL_REV3_TESTMETHOD/<Root>/IO397 Analog Output1 (sg_fpga_IO397_da) */
    {
      SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ACTUAL_REV3_TESTMETHOD_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &ACTUAL_REV3_TESTMETHOD_B.Constant1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &ACTUAL_REV3_TESTMETHOD_B.Constant);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "IO397 Analog Output1");
      ssSetPath(rts, "ACTUAL_REV3_TESTMETHOD/IO397 Analog Output1");
      ssSetRTModel(rts,ACTUAL_REV3_TESTMETHOD_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogOutput1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogOutput1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogOutput1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogOutput1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogOutput1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogOutput1_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &ACTUAL_REV3_TESTMETHOD_DW.IO397AnalogOutput1_IWORK);
      ssSetPWork(rts, (void **)
                 &ACTUAL_REV3_TESTMETHOD_DW.IO397AnalogOutput1_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 2);

        /* IWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ACTUAL_REV3_TESTMETHOD_DW.IO397AnalogOutput1_IWORK);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &ACTUAL_REV3_TESTMETHOD_DW.IO397AnalogOutput1_PWORK[0]);
      }

      /* registration */
      sg_fpga_IO397_da(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: ACTUAL_REV3_TESTMETHOD/<Root>/IO397 Analog Input (sg_fpga_IO397_ad) */
    {
      SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, ACTUAL_REV3_TESTMETHOD_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &ACTUAL_REV3_TESTMETHOD_B.IO397AnalogInput_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &ACTUAL_REV3_TESTMETHOD_B.IO397AnalogInput_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "IO397 Analog Input");
      ssSetPath(rts, "ACTUAL_REV3_TESTMETHOD/IO397 Analog Input");
      ssSetRTModel(rts,ACTUAL_REV3_TESTMETHOD_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 9);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogInput_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogInput_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogInput_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogInput_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogInput_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogInput_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogInput_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogInput_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       ACTUAL_REV3_TESTMETHOD_cal->IO397AnalogInput_P9_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &ACTUAL_REV3_TESTMETHOD_DW.IO397AnalogInput_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ACTUAL_REV3_TESTMETHOD_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ACTUAL_REV3_TESTMETHOD_DW.IO397AnalogInput_PWORK[0]);
      }

      /* registration */
      sg_fpga_IO397_ad(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Start for S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/Constant1' */
  ACTUAL_REV3_TESTMETHOD_B.Constant1 =
    ACTUAL_REV3_TESTMETHOD_cal->Constant1_Value;

  /* Start for Constant: '<Root>/Constant' */
  ACTUAL_REV3_TESTMETHOD_B.Constant = ACTUAL_REV3_TESTMETHOD_cal->Constant_Value;

  /* Start for S-Function (sg_fpga_IO397_da): '<Root>/IO397 Analog Output1' */
  /* Level2 S-Function Block: '<Root>/IO397 Analog Output1' (sg_fpga_IO397_da) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_fpga_IO397_ad): '<Root>/IO397 Analog Input' */
  /* Level2 S-Function Block: '<Root>/IO397 Analog Input' (sg_fpga_IO397_ad) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/While Iterator Subsystem' */

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<S1>/CAN Write ' */
  /* Level2 S-Function Block: '<S1>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/While Iterator Subsystem1' */

  /* Start for S-Function (sg_CAN_OfA2_read_s): '<S2>/CAN Read ' */
  /* Level2 S-Function Block: '<S2>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S2>/CAN Unpack' */

  /*-----------S-Function Block: <S2>/CAN Unpack -----------------*/

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem1' */
}

/* Model terminate function */
void ACTUAL_REV3_TESTMETHOD_terminate(void)
{
  /* Terminate for S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_IO397_da): '<Root>/IO397 Analog Output1' */
  /* Level2 S-Function Block: '<Root>/IO397 Analog Output1' (sg_fpga_IO397_da) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_IO397_ad): '<Root>/IO397 Analog Input' */
  /* Level2 S-Function Block: '<Root>/IO397 Analog Input' (sg_fpga_IO397_ad) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<Root>/While Iterator Subsystem' */

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<S1>/CAN Write ' */
  /* Level2 S-Function Block: '<S1>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/While Iterator Subsystem' */

  /* Terminate for Atomic SubSystem: '<Root>/While Iterator Subsystem1' */

  /* Terminate for S-Function (sg_CAN_OfA2_read_s): '<S2>/CAN Read ' */
  /* Level2 S-Function Block: '<S2>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = ACTUAL_REV3_TESTMETHOD_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/While Iterator Subsystem1' */

  /* user code (Terminate function Trailer) */
  {
    freeFPGAModuleSgLib((uint32_t)1);
  }
}
