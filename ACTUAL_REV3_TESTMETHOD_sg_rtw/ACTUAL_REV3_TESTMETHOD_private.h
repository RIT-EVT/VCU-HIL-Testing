/*
 * ACTUAL_REV3_TESTMETHOD_private.h
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

#ifndef ACTUAL_REV3_TESTMETHOD_private_h_
#define ACTUAL_REV3_TESTMETHOD_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "ACTUAL_REV3_TESTMETHOD_types.h"
#include "ACTUAL_REV3_TESTMETHOD.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern "C" void sg_CAN_OfA2_write_s(SimStruct *rts);
extern "C" void sg_CAN_OfA2_read_s(SimStruct *rts);
extern "C" void sg_CANLIN_OfA2_setup_s(SimStruct *rts);
extern "C" void sg_fpga_IO397_da(SimStruct *rts);
extern "C" void sg_fpga_IO397_ad(SimStruct *rts);

#endif                                 /* ACTUAL_REV3_TESTMETHOD_private_h_ */
