#include "ACTUAL_REV3_TESTMETHOD_cal.h"
#include "ACTUAL_REV3_TESTMETHOD.h"

/* Storage class 'PageSwitching' */
ACTUAL_REV3_TESTMETHOD_cal_type ACTUAL_REV3_TESTMETHOD_cal_impl = {
  /* Computed Parameter: CANWrite_P1_Size
   * Referenced by: '<S1>/CAN Write '
   */
  { 1.0, 10.0 },

  /* Expression: initValues
   * Referenced by: '<S1>/CAN Write '
   */
  { 613.0, 1.0, 0.01, 0.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0 },

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<S2>/CAN Read '
   */
  { 1.0, 13.0 },

  /* Expression: initValues
   * Referenced by: '<S2>/CAN Read '
   */
  { 613.0, 1.0, 0.01, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 2.0, 1.0, 2.0 },

  /* Computed Parameter: CANandLINSetup_P1_Size
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  { 1.0, 45.0 },

  /* Expression: [moduleInitValues, canChn1InitValues, canChn2InitValues, canChn3InitValues, canChn4InitValues, linChn1InitValues, linChn2InitValues]
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  { 613.0, 1.0, 1.0, -1.0, -1.0, 2.0, 4.0, 1.0, 31.0, 8.0, 2.0, 1.0, 15.0, 4.0,
    2.0, 4.0, 1.0, 31.0, 8.0, 2.0, 1.0, 15.0, 4.0, 1.0, 2.0, 1.0, 31.0, 8.0, 2.0,
    1.0, 5.0, 2.0, 1.0, 2.0, 1.0, 31.0, 8.0, 2.0, 1.0, 5.0, 2.0, 1.0, 19200.0,
    1.0, 19200.0 },

  /* Computed Parameter: CANandLINSetup_P2_Size
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: canInitStructArray
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  0.0,

  /* Computed Parameter: CANandLINSetup_P3_Size
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: canTermStructArray
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  0.0,

  /* Expression: 10.8
   * Referenced by: '<Root>/Constant1'
   */
  10.8,

  /* Expression: 10.8
   * Referenced by: '<Root>/Constant'
   */
  10.8,

  /* Computed Parameter: IO397AnalogOutput1_P1_Size
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  1.0,

  /* Computed Parameter: IO397AnalogOutput1_P2_Size
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  { 1.0, 2.0 },

  /* Expression: chan
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  { 1.0, 2.0 },

  /* Computed Parameter: IO397AnalogOutput1_P3_Size
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  { 1.0, 2.0 },

  /* Expression: initVal
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: IO397AnalogOutput1_P4_Size
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  { 1.0, 2.0 },

  /* Expression: resetVal
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: IO397AnalogOutput1_P5_Size
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  0.001,

  /* Computed Parameter: IO397AnalogOutput1_P6_Size
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  { 1.0, 1.0 },

  /* Expression: span
   * Referenced by: '<Root>/IO397 Analog Output1'
   */
  6.0,

  /* Computed Parameter: IO397AnalogInput_P1_Size
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  1.0,

  /* Computed Parameter: IO397AnalogInput_P2_Size
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  { 1.0, 2.0 },

  /* Expression: chan
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  { 1.0, 2.0 },

  /* Computed Parameter: IO397AnalogInput_P3_Size
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  { 1.0, 1.0 },

  /* Expression: trigger
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  1.0,

  /* Computed Parameter: IO397AnalogInput_P4_Size
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  { 1.0, 1.0 },

  /* Expression: range
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  1.0,

  /* Computed Parameter: IO397AnalogInput_P5_Size
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  0.001,

  /* Computed Parameter: IO397AnalogInput_P6_Size
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  { 1.0, 1.0 },

  /* Expression: p.AiTriggerMode
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  2.0,

  /* Computed Parameter: IO397AnalogInput_P7_Size
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  { 1.0, 1.0 },

  /* Expression: p.AiClockDivider
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  0.0,

  /* Computed Parameter: IO397AnalogInput_P8_Size
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  { 1.0, 1.0 },

  /* Expression: parAiInternalSignal
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  1.0,

  /* Computed Parameter: IO397AnalogInput_P9_Size
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  { 1.0, 1.0 },

  /* Expression: parAiDioTriggerChannel
   * Referenced by: '<Root>/IO397 Analog Input'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant5'
   */
  0.0
};

ACTUAL_REV3_TESTMETHOD_cal_type *ACTUAL_REV3_TESTMETHOD_cal =
  &ACTUAL_REV3_TESTMETHOD_cal_impl;
