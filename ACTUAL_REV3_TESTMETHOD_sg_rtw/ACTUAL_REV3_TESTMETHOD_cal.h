#ifndef ACTUAL_REV3_TESTMETHOD_cal_h_
#define ACTUAL_REV3_TESTMETHOD_cal_h_
#include "rtwtypes.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct ACTUAL_REV3_TESTMETHOD_cal_type {
  real_T CANWrite_P1_Size[2];          /* Computed Parameter: CANWrite_P1_Size
                                        * Referenced by: '<S1>/CAN Write '
                                        */
  real_T CANWrite_P1[10];              /* Expression: initValues
                                        * Referenced by: '<S1>/CAN Write '
                                        */
  real_T CANRead_P1_Size[2];           /* Computed Parameter: CANRead_P1_Size
                                        * Referenced by: '<S2>/CAN Read '
                                        */
  real_T CANRead_P1[13];               /* Expression: initValues
                                        * Referenced by: '<S2>/CAN Read '
                                        */
  real_T CANandLINSetup_P1_Size[2];/* Computed Parameter: CANandLINSetup_P1_Size
                                    * Referenced by: '<Root>/CAN and LIN Setup '
                                    */
  real_T CANandLINSetup_P1[45];
  /* Expression: [moduleInitValues, canChn1InitValues, canChn2InitValues, canChn3InitValues, canChn4InitValues, linChn1InitValues, linChn2InitValues]
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  real_T CANandLINSetup_P2_Size[2];/* Computed Parameter: CANandLINSetup_P2_Size
                                    * Referenced by: '<Root>/CAN and LIN Setup '
                                    */
  real_T CANandLINSetup_P2;            /* Expression: canInitStructArray
                                        * Referenced by: '<Root>/CAN and LIN Setup '
                                        */
  real_T CANandLINSetup_P3_Size[2];/* Computed Parameter: CANandLINSetup_P3_Size
                                    * Referenced by: '<Root>/CAN and LIN Setup '
                                    */
  real_T CANandLINSetup_P3;            /* Expression: canTermStructArray
                                        * Referenced by: '<Root>/CAN and LIN Setup '
                                        */
  real_T Constant1_Value;              /* Expression: 10.8
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 10.8
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T IO397AnalogOutput1_P1_Size[2];
                               /* Computed Parameter: IO397AnalogOutput1_P1_Size
                                * Referenced by: '<Root>/IO397 Analog Output1'
                                */
  real_T IO397AnalogOutput1_P1;        /* Expression: id
                                        * Referenced by: '<Root>/IO397 Analog Output1'
                                        */
  real_T IO397AnalogOutput1_P2_Size[2];
                               /* Computed Parameter: IO397AnalogOutput1_P2_Size
                                * Referenced by: '<Root>/IO397 Analog Output1'
                                */
  real_T IO397AnalogOutput1_P2[2];     /* Expression: chan
                                        * Referenced by: '<Root>/IO397 Analog Output1'
                                        */
  real_T IO397AnalogOutput1_P3_Size[2];
                               /* Computed Parameter: IO397AnalogOutput1_P3_Size
                                * Referenced by: '<Root>/IO397 Analog Output1'
                                */
  real_T IO397AnalogOutput1_P3[2];     /* Expression: initVal
                                        * Referenced by: '<Root>/IO397 Analog Output1'
                                        */
  real_T IO397AnalogOutput1_P4_Size[2];
                               /* Computed Parameter: IO397AnalogOutput1_P4_Size
                                * Referenced by: '<Root>/IO397 Analog Output1'
                                */
  real_T IO397AnalogOutput1_P4[2];     /* Expression: resetVal
                                        * Referenced by: '<Root>/IO397 Analog Output1'
                                        */
  real_T IO397AnalogOutput1_P5_Size[2];
                               /* Computed Parameter: IO397AnalogOutput1_P5_Size
                                * Referenced by: '<Root>/IO397 Analog Output1'
                                */
  real_T IO397AnalogOutput1_P5;        /* Expression: ts
                                        * Referenced by: '<Root>/IO397 Analog Output1'
                                        */
  real_T IO397AnalogOutput1_P6_Size[2];
                               /* Computed Parameter: IO397AnalogOutput1_P6_Size
                                * Referenced by: '<Root>/IO397 Analog Output1'
                                */
  real_T IO397AnalogOutput1_P6;        /* Expression: span
                                        * Referenced by: '<Root>/IO397 Analog Output1'
                                        */
  real_T IO397AnalogInput_P1_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P1_Size
                                  * Referenced by: '<Root>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P1;          /* Expression: id
                                        * Referenced by: '<Root>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P2_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P2_Size
                                  * Referenced by: '<Root>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P2[2];       /* Expression: chan
                                        * Referenced by: '<Root>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P3_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P3_Size
                                  * Referenced by: '<Root>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P3;          /* Expression: trigger
                                        * Referenced by: '<Root>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P4_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P4_Size
                                  * Referenced by: '<Root>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P4;          /* Expression: range
                                        * Referenced by: '<Root>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P5_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P5_Size
                                  * Referenced by: '<Root>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P5;          /* Expression: ts
                                        * Referenced by: '<Root>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P6_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P6_Size
                                  * Referenced by: '<Root>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P6;          /* Expression: p.AiTriggerMode
                                        * Referenced by: '<Root>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P7_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P7_Size
                                  * Referenced by: '<Root>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P7;          /* Expression: p.AiClockDivider
                                        * Referenced by: '<Root>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P8_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P8_Size
                                  * Referenced by: '<Root>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P8;          /* Expression: parAiInternalSignal
                                        * Referenced by: '<Root>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P9_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P9_Size
                                  * Referenced by: '<Root>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P9;          /* Expression: parAiDioTriggerChannel
                                        * Referenced by: '<Root>/IO397 Analog Input'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant5'
                                        */
};

/* Storage class 'PageSwitching' */
extern ACTUAL_REV3_TESTMETHOD_cal_type ACTUAL_REV3_TESTMETHOD_cal_impl;
extern ACTUAL_REV3_TESTMETHOD_cal_type *ACTUAL_REV3_TESTMETHOD_cal;

#endif                                 /* ACTUAL_REV3_TESTMETHOD_cal_h_ */
