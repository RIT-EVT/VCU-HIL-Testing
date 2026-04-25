/* Main generated for Simulink Real-Time model ACTUAL_REV3_TESTMETHOD */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "ACTUAL_REV3_TESTMETHOD.h"
#include "rte_ACTUAL_REV3_TESTMETHOD_parameters.h"

/* Task wrapper function definitions */
void ACTUAL_REV3_TESTMETHOD_Task1(void)
{ 
    ACTUAL_REV3_TESTMETHOD_step0();
} 
void ACTUAL_REV3_TESTMETHOD_Task2(void)
{ 
    ACTUAL_REV3_TESTMETHOD_step1();
} 
/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(ACTUAL_REV3_TESTMETHOD_Task1), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);
slrealtime::TaskInfo task_2( 1u, std::bind(ACTUAL_REV3_TESTMETHOD_Task2), slrealtime::TaskInfo::PERIODIC, 0.01, 0, 39);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo ACTUAL_REV3_TESTMETHOD_Info =
{
    "ACTUAL_REV3_TESTMETHOD",
    ACTUAL_REV3_TESTMETHOD_initialize,
    ACTUAL_REV3_TESTMETHOD_terminate,
    []()->char const*& { return ACTUAL_REV3_TESTMETHOD_M->errorStatus; },
    []()->unsigned char& { return ACTUAL_REV3_TESTMETHOD_M->Timing.stopRequestedFlag; },
    { task_1, task_2 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, ACTUAL_REV3_TESTMETHOD_Info);
}
