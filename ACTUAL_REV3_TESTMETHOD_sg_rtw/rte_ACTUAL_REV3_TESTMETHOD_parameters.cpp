#include "rte_ACTUAL_REV3_TESTMETHOD_parameters.h"
#include "ACTUAL_REV3_TESTMETHOD.h"
#include "ACTUAL_REV3_TESTMETHOD_cal.h"

extern ACTUAL_REV3_TESTMETHOD_cal_type ACTUAL_REV3_TESTMETHOD_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&ACTUAL_REV3_TESTMETHOD_cal_impl, (void**)
      &ACTUAL_REV3_TESTMETHOD_cal, sizeof(ACTUAL_REV3_TESTMETHOD_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
