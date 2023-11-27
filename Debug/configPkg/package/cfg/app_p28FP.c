/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-K04
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/c28/Hwi.h>
#include <ti/sysbios/family/c28/IntrinsicsSupport.h>
#include <ti/sysbios/family/c28/TaskSupport.h>
#include <ti/sysbios/family/c28/Timer.h>
#include <ti/sysbios/family/c28/f2837x/TimestampProvider.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/HeapStd.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerBuf.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#if defined(__ti__) && !defined(__clang__)
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

#if !(defined(__GNUC__))
#if !(defined(__TI_GNU_ATTRIBUTE_SUPPORT__) || defined(__IAR_SYSTEMS_ICC__)) || defined(__ARP32__)
#define __attribute__(x)
#endif
#endif

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.c28.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_c28_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_c28_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_c28_Hwi_Module__ ti_sysbios_family_c28_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_c28_Hwi_Object__ {
    const ti_sysbios_family_c28_Hwi_Fxns__ *__fxns;
    xdc_UInt intNum;
    xdc_Bool enableInt;
    xdc_Bool enableAck;
    xdc_Bits16 disableMask;
    xdc_Bits16 restoreMask;
    xdc_Bits16 ierBitMask;
    xdc_UArg arg;
    ti_sysbios_family_c28_Hwi_FuncPtr fxn;
    ti_sysbios_family_c28_Hwi_Irp irp;
    __TA_ti_sysbios_family_c28_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_c28_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_c28_Hwi_Object__ obj;
} ti_sysbios_family_c28_Hwi_Object2__;


/*
 * ======== ti.sysbios.family.c28.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c28.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c28.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_c28_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_c28_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_c28_Timer_Module__ ti_sysbios_family_c28_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_c28_Timer_Object__ {
    const ti_sysbios_family_c28_Timer_Fxns__ *__fxns;
    xdc_Int id;
    ti_sysbios_family_c28_Timer_EmulationMode emulationModeInit;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt32 period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt16 prescale;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_c28_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_c28_Hwi_Handle hwi;
} ti_sysbios_family_c28_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_c28_Timer_Object__ obj;
} ti_sysbios_family_c28_Timer_Object2__;


/*
 * ======== ti.sysbios.family.c28.f2837x.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_c28_Hwi_Object */

/* Object */
typedef ti_sysbios_family_c28_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__ *__fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_c28_Timer_Object */

/* Object */
typedef ti_sysbios_family_c28_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
    xdc_UInt32 timeoutTicks;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_c28_Timer_Object */

/* Object */
typedef ti_sysbios_family_c28_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_Bool privileged;
    xdc_Ptr domain;
    xdc_UInt32 checkValue;
    xdc_Ptr tls;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.HeapStd INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_HeapStd_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_HeapStd_Module__;

/* Module__root__V */
extern xdc_runtime_HeapStd_Module__ xdc_runtime_HeapStd_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_HeapStd_Object__ {
    const xdc_runtime_HeapStd_Fxns__ *__fxns;
    xdc_runtime_Memory_Size remainSize;
    xdc_runtime_Memory_Size startSize;
} xdc_runtime_HeapStd_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_HeapStd_Object__ obj;
} xdc_runtime_HeapStd_Object2__;


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerBuf_Object__ {
    const xdc_runtime_LoggerBuf_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle bufHeap;
    __TA_xdc_runtime_LoggerBuf_Instance_State__entryArr entryArr;
    xdc_runtime_LoggerBuf_Entry *curEntry;
    xdc_runtime_LoggerBuf_Entry *endEntry;
    xdc_runtime_LoggerBuf_Entry *readEntry;
    xdc_Bits32 serial;
    xdc_UInt16 numEntries;
    xdc_Int8 advance;
    xdc_Bool enabled;
    xdc_Bool flush;
} xdc_runtime_LoggerBuf_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Object__ obj;
} xdc_runtime_LoggerBuf_Object2__;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module_GateProxy_Module__ xdc_runtime_LoggerBuf_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_LoggerBuf_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Module_GateProxy_Object__ obj;
} xdc_runtime_LoggerBuf_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- xdc_runtime_HeapStd_Object */

/* Object */
typedef xdc_runtime_HeapStd_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".econst:xdc_runtime_ISystemSupport_Interface__BASE__C");
asm("	.sect \".econst:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".econst:xdc_runtime_IGateProvider_Interface__BASE__C");
asm("	.sect \".econst:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".econst:xdc_runtime_IModule_Interface__BASE__C");
asm("	.sect \".econst:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {NULL};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".econst:xdc_runtime_IFilterLogger_Interface__BASE__C");
asm("	.sect \".econst:xdc_runtime_IFilterLogger_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_IFilterLogger_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_IFilterLogger_Interface__BASE__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {&xdc_runtime_ILogger_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".econst:xdc_runtime_ILogger_Interface__BASE__C");
asm("	.sect \".econst:xdc_runtime_ILogger_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_ILogger_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_ILogger_Interface__BASE__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".econst:xdc_runtime_IHeap_Interface__BASE__C");
asm("	.sect \".econst:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".econst:ti_sysbios_gates_GateHwi_Module__FXNS__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");

const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x2b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".econst:ti_sysbios_gates_GateMutex_Module__FXNS__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");

const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x2c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.HeapStd VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__FXNS__C, ".econst:xdc_runtime_HeapStd_Module__FXNS__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__FXNS__C\"");
asm("	.clink ");

const xdc_runtime_HeapStd_Fxns__ xdc_runtime_HeapStd_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &xdc_runtime_HeapStd_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_HeapStd_alloc__E,
    xdc_runtime_HeapStd_free__E,
    xdc_runtime_HeapStd_isBlocking__E,
    xdc_runtime_HeapStd_getStats__E,
    {
        xdc_runtime_HeapStd_Object__create__S,
        xdc_runtime_HeapStd_Object__delete__S,
        xdc_runtime_HeapStd_Handle__label__S,
        0xb, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerBuf VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__FXNS__C, ".econst:xdc_runtime_LoggerBuf_Module__FXNS__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__FXNS__C\"");
asm("	.clink ");

const xdc_runtime_LoggerBuf_Fxns__ xdc_runtime_LoggerBuf_Module__FXNS__C = {
    &xdc_runtime_IFilterLogger_Interface__BASE__C, /* __base */
    &xdc_runtime_LoggerBuf_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerBuf_enable__E,
    xdc_runtime_LoggerBuf_disable__E,
    xdc_runtime_LoggerBuf_write0__E,
    xdc_runtime_LoggerBuf_write1__E,
    xdc_runtime_LoggerBuf_write2__E,
    xdc_runtime_LoggerBuf_write4__E,
    xdc_runtime_LoggerBuf_write8__E,
    xdc_runtime_LoggerBuf_setFilterLevel__E,
    xdc_runtime_LoggerBuf_getFilterLevel__E,
    {
        xdc_runtime_LoggerBuf_Object__create__S,
        xdc_runtime_LoggerBuf_Object__delete__S,
        xdc_runtime_LoggerBuf_Handle__label__S,
        0x8, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".econst:xdc_runtime_SysMin_Module__FXNS__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");

const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xf, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int f_arg0);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c28.Hwi DECLARATIONS ========
 */

/* --> myTickFxn */
extern xdc_Void myTickFxn(xdc_UArg f_arg0);

/* --> myHwi */
extern xdc_Void myHwi(xdc_UArg f_arg0);

/* Object__table__V */
ti_sysbios_family_c28_Hwi_Object__ ti_sysbios_family_c28_Hwi_Object__table__V[3];

/* Module_State__ */
typedef struct ti_sysbios_family_c28_Hwi_Module_State__ {
    xdc_Bits16 ierMask;
    xdc_Char *isrStack;
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_c28_Hwi_Module_State__dispatchTable dispatchTable;
    ti_sysbios_family_c28_Hwi_Irp irp;
    xdc_Bool globalEnable;
    xdc_Bits16 shadowIER;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
} ti_sysbios_family_c28_Hwi_Module_State__;

/* --> ti_sysbios_family_c28_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_c28_Hwi_Module_State__dispatchTable ti_sysbios_family_c28_Hwi_Module_State_0_dispatchTable__A[224];

/* --> _stack */
extern void* _stack;

/* --> _STACK_SIZE */
extern void* _STACK_SIZE;

/* Module__state__V */
ti_sysbios_family_c28_Hwi_Module_State__ ti_sysbios_family_c28_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.family.c28.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c28.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c28.Timer DECLARATIONS ========
 */

/* --> myTickFxn */
extern xdc_Void myTickFxn(xdc_UArg f_arg0);

/* Object__table__V */
ti_sysbios_family_c28_Timer_Object__ ti_sysbios_family_c28_Timer_Object__table__V[3];

/* Module_State__ */
typedef struct ti_sysbios_family_c28_Timer_Module_State__ {
    xdc_Char availMask;
    __TA_ti_sysbios_family_c28_Timer_Module_State__staticTimers staticTimers;
} ti_sysbios_family_c28_Timer_Module_State__;

/* Module__state__V */
ti_sysbios_family_c28_Timer_Module_State__ ti_sysbios_family_c28_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.c28.f2837x.TimestampProvider DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg f_arg0);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> myIdleFxn */
extern xdc_Void myIdleFxn(xdc_Void);

/* --> myIdleFxn2 */
extern xdc_Void myIdleFxn2(xdc_Void);

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[256];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[256] __attribute__ ((section(".ebss:taskStackSection"), aligned(2)));
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    xdc_Bool curTaskPrivileged;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.HeapStd DECLARATIONS ========
 */

/* Object__table__V */
xdc_runtime_HeapStd_Object__ xdc_runtime_HeapStd_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_HeapStd_Module_State__ {
    xdc_runtime_Memory_Size remainRTSSize;
} xdc_runtime_HeapStd_Module_State__;

/* Module__state__V */
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V;


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf DECLARATIONS ========
 */

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[15];

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_LoggerBuf_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} xdc_runtime_LoggerBuf_Module_State__;

/* Module__state__V */
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_catalog_c2800_initF2837x_Boot_initStartup */
extern xdc_Void ti_catalog_c2800_initF2837x_Boot_initStartup(xdc_Void);

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_LoggerBuf_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerBuf_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_c28_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_c28_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_c28_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_c28_Timer_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[170];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char* f_arg0,xdc_UInt f_arg1);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char** f_arg0,xdc_CString* f_arg1,xdc_VaList* f_arg2,xdc_runtime_System_ParseData* f_arg3);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[1];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[1];


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".econst:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".econst:ti_sysbios_knl_Clock_Module_State_clockQ__O");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".econst:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".econst:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".econst:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/Danial/Documents/GitHub/soil_monitor_c2000/Debug/configPkg/package/cfg/app_p28FP");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 28FP");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.tms320x28");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.C28_float");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.cof.Coff");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */


xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    (unsigned short)(~0U), /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    NULL,  /* msg */
    {
        0,  /* mod */
        NULL,  /* file */
        0   /* line */
    }
};

/*
 *  ======== Error_policyLog ========
 */
Void xdc_runtime_Error_policyLog__I(xdc_runtime_Types_ModuleId mod,
    CString file, Int line, CString msg, IArg arg1, IArg arg2)
{
    /*
     * Log the error, now that we've retrieved the error message.
     *
     * We call Log_put here instead of Log_write so that we can log the
     * caller's module id instead of the Error module's id.
     *
     * In logging this event, we'll use the Error module's mask and logger. We
     * don't have a way to reliably access the caller's diags mask and logger.
     * The caller isn't guaranteed to have a mask on the target, even if they
     * are performing logging.
     */
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Error_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Error_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Error_Module__diagsMask__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Error_Module__loggerObj__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Error_Module__loggerFxn8__C

    if (xdc_runtime_Diags_query(xdc_runtime_Log_L_error)) {
        xdc_runtime_Log_put8(xdc_runtime_Log_L_error, mod, (IArg) file, line,
                 (IArg) msg, arg1, arg2, 0, 0, 0);
    }
}

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
/* REQ_TAG(SYSBIOS-953) */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0);
}
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0);
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0);
}
xdc_Bool ti_sysbios_family_c28_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c28_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0);
}
xdc_Bool ti_sysbios_family_c28_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c28_Timer_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0);
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0);
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0);
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0);
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0);
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0);
}


/*
 * Startup_exec__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * attribute, whole program optimizers would otherwise optimize-out this
 * function.
 */
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((used));

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
/* REQ_TAG(SYSBIOS-949) */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[10];
    xdc_runtime_Startup_startModsFxn__C(state, 10);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/*
 * Startup_reset__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((used));

extern xdc_Void ti_catalog_c2800_initF2837x_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_catalog_c2800_initF2837x_Boot_init();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
/* REQ_TAG(SYSBIOS-1072) */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt,
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;

    /*
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;

    res = 0;

    c = **pfmt;
    *pfmt = *pfmt + 1;


    if (c == '$') {
        c = **pfmt;
        *pfmt = *pfmt + 1;

        if (c == 'L') {
            xdc_runtime_Types_Label *lab = (parse->aFlag == TRUE) ?
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);

            /*
             * Call Text_putLab to write out the label, taking the precision
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field. */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'F') {
            xdc_runtime_Types_Site site;

            /* Retrieve the file name string from the argument list */
            site.file = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Retrieve the line number from the argument list. */
            site.line = (parse->aFlag == TRUE) ?
                (xdc_Int) va_arg(va, xdc_IArg) :
                (xdc_Int) va_arg(va, xdc_Int);

            /*
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;

            /*
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string length.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Update pva before passing it to doPrint. */
            *pva = va;

            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             * System_doPrint guarantees that parse->precis is positive.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, (xdc_SizeT)parse->precis,
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf != NULL) {
                if (res >= parse->precis) {
                    /* Not enough space for all characters, only
                     * (parse->precis - 1) and '\0' were printed.
                     */
                    res = parse->precis - 1;
                }
                *pbuf += res;
            }

            /* Update the temporary variable with any changes to *pva */
            va = *pva;

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }

    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag == TRUE) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining).
     */
    goto end;
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int out, const char *buffer, unsigned count);
#elif (defined(gnu_targets_arm_STD_) && defined(xdc_target__os_undefined))
extern int _write(int out, char *buffer, int count);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_arm_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;

    while (size != 0U) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || ((xdc_UInt)printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= (xdc_UInt)printCount;
        buf = buf + printCount;
    }
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */

/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_runtime_Text_RopeVisitor visFxn, xdc_Ptr visState)
{
    ((xdc_runtime_Text_MatchVisState *)visState)->res = -1;
}

/*
 * ======== ti.catalog.c2800.initF2837x.Boot TEMPLATE ========
 */

    extern ti_catalog_c2800_initF2837x_Boot_disableWatchdog(xdc_Void);
    extern ti_catalog_c2800_initF2837x_Boot_initSharedRAMs(xdc_UInt sharedRamMask);
    extern ti_catalog_c2800_initF2837x_Boot_configurePllDivs(xdc_UInt iMult, xdc_UInt fMult, xdc_UInt sysDiv, xdc_UInt oscClkSrcVal);
    extern ti_catalog_c2800_initF2837x_Boot_bootCPU2(xdc_Void);
    extern ti_catalog_c2800_initF2837x_Boot_initFlash(xdc_Bool configWaitStates, xdc_UInt waitStates, xdc_Bool enableProgramCache, xdc_Bool enableDataCache);

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_c2800_initF2837x_Boot_init, ".text:.bootCodeSection")
#pragma CODE_SECTION(ti_catalog_c2800_initF2837x_Boot_initStartup, ".text:.bootCodeSection")
#pragma CODE_SECTION(ti_catalog_c2800_initF2837x_Boot_limpAbort, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm3_concertoInit_Boot_init ========
 *  Boot initialization run as an xdc.runtime.Reset function.
 */
xdc_Void ti_catalog_c2800_initF2837x_Boot_init(xdc_Void)
{
    ti_catalog_c2800_initF2837x_Boot_configurePllDivs(40, 0, 1, 1);

    ti_catalog_c2800_initF2837x_Boot_initSharedRAMs(0);
}

/*
 *  ======== ti_catalog_c2800_initF2837x_Boot_initStartup ========
 *  Boot initialization run as an xdc.runtime.Startup first function.
 */
xdc_Void ti_catalog_c2800_initF2837x_Boot_initStartup(xdc_Void)
{
    ti_catalog_c2800_initF2837x_Boot_initFlash(1, 3, 1, 1);
}

/*
 *  ======== ti_catalog_c2800_initF2837x_Boot_limpAbort ========
 */
xdc_Void ti_catalog_c2800_initF2837x_Boot_limpAbort(xdc_Void)
{
    extern ti_catalog_c2800_initF2837x_Boot_defaultLimpAbortFunction();
    ti_catalog_c2800_initF2837x_Boot_defaultLimpAbortFunction();
}

/*
 * ======== ti.sysbios.family.c28.Hwi TEMPLATE ========
 */


extern Void _c_int00(Void);
extern Void ti_sysbios_family_c28_Hwi_dispatchPie(Void);
extern Void ti_sysbios_family_c28_Hwi_dispatchTable(Void);
extern Void ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I(Void);

/* Interrupt vector table.  This will be copied to 0xd00 at boot time. */
const UInt32 ti_sysbios_family_c28_Hwi_vectors[] = {
    /* 0 */  (UInt32)_c_int00,
    /* 1 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 2 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 3 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 4 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 5 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 6 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 7 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 8 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 9 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 10 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 11 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 12 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 13 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 14 */  (UInt32)ti_sysbios_family_c28_Hwi_dispatchTable + (3 * (14-1)),
    /* 15 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 16 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 17 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 18 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 19 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 20 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 21 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 22 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 23 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 24 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 25 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 26 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 27 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 28 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 29 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 30 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 31 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 32 */  (UInt32)ti_sysbios_family_c28_Hwi_dispatchPie,
    /* 33 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 34 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 35 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 36 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 37 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 38 */  (UInt32)ti_sysbios_family_c28_Hwi_dispatchPie,
    /* 39 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 40 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 41 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 42 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 43 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 44 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 45 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 46 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 47 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 48 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 49 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 50 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 51 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 52 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 53 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 54 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 55 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 56 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 57 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 58 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 59 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 60 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 61 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 62 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 63 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 64 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 65 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 66 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 67 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 68 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 69 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 70 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 71 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 72 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 73 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 74 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 75 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 76 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 77 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 78 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 79 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 80 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 81 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 82 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 83 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 84 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 85 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 86 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 87 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 88 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 89 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 90 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 91 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 92 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 93 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 94 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 95 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 96 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 97 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 98 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 99 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 100 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 101 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 102 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 103 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 104 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 105 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 106 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 107 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 108 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 109 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 110 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 111 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 112 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 113 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 114 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 115 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 116 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 117 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 118 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 119 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 120 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 121 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 122 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 123 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 124 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 125 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 126 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 127 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 128 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 129 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 130 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 131 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 132 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 133 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 134 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 135 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 136 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 137 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 138 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 139 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 140 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 141 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 142 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 143 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 144 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 145 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 146 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 147 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 148 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 149 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 150 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 151 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 152 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 153 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 154 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 155 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 156 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 157 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 158 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 159 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 160 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 161 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 162 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 163 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 164 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 165 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 166 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 167 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 168 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 169 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 170 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 171 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 172 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 173 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 174 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 175 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 176 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 177 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 178 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 179 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 180 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 181 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 182 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 183 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 184 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 185 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 186 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 187 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 188 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 189 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 190 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 191 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 192 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 193 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 194 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 195 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 196 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 197 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 198 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 199 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 200 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 201 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 202 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 203 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 204 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 205 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 206 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 207 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 208 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 209 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 210 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 211 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 212 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 213 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 214 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 215 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 216 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 217 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 218 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 219 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 220 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 221 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 222 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 223 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
};

extern cregister volatile UInt IER;


/*
 * ======== NON-ZERO LATENCY IMPLEMENTATION ========
 */

/*
 * ======== Hwi_startup ========
 */
Void ti_sysbios_family_c28_Hwi_startup__E()
{
    __enable_interrupts();
}

/*
 * ======== Hwi_disable ========
 */
UInt ti_sysbios_family_c28_Hwi_disable__E()
{
    UInt key;

    key = __disable_interrupts();

    return (key);
}

/*
 *  ======== Hwi_enable ========
 */
UInt ti_sysbios_family_c28_Hwi_enable__E()
{
    UInt key;

    key = __enable_interrupts();

    return (key);
}

/*
 *  ======== Hwi_restore ========
 */

Void ti_sysbios_family_c28_Hwi_restore__E(UInt key)
{
    __restore_interrupts(key);
}

/*
 *  ======== Hwi_disableIER ========
 */
Bits16 ti_sysbios_family_c28_Hwi_disableIER__E(Bits16 mask)
{
    UInt key;
    Bits16 oldIER;

    key = __disable_interrupts();

    oldIER = IER;
    IER &= ~mask;

    __restore_interrupts(key);

    return (oldIER);
}

/*
 *  ======== Hwi_enableIER ========
 */
Bits16 ti_sysbios_family_c28_Hwi_enableIER__E(Bits16 mask)
{
    UInt key;
    Bits16 oldIER;

    key = __disable_interrupts();

    oldIER = IER;
    IER |= mask;

    __restore_interrupts(key);

    return (oldIER);
}

/*
 *  ======== Hwi_restoreIER ========
 */
Bits16 ti_sysbios_family_c28_Hwi_restoreIER__E(Bits16 mask)
{
    UInt key;
    Bits16 oldIER;

    key = __disable_interrupts();

    oldIER = IER;
    IER = mask;

    __restore_interrupts(key);

    return (oldIER);
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int stat);

extern Void ti_sysbios_BIOS_registerRTSLock(Void);
extern Void ti_sysbios_family_c28_Timer_startup__E(Void);

Void ti_sysbios_BIOS_startFunc__I(Void)
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    (void)xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_c28_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    (void)ti_sysbios_knl_Task_disable();
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}


/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock(Void)
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0U) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock(Void)
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0U) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I(Void)
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }
    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())
        == 0U) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__) && !defined(__clang__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);
#pragma FUNC_EXT_CALLED(aligned_alloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif


/*
 * Header is a union to make sure that the size is a power of 2.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (NULL);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    return (NULL);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    return (NULL);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    return (NULL);
}

/*
 *  ======== aligned_alloc ========
 */
Void ATTRIBUTE *aligned_alloc(SizeT alignment, SizeT size)
{
    return (NULL);
}
#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data:ti_sysbios_BIOS_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0xbebc200U,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0U,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".econst:ti_sysbios_BIOS_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".econst:ti_sysbios_BIOS_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".econst:ti_sysbios_BIOS_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((const CT__ti_sysbios_BIOS_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".econst:ti_sysbios_BIOS_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((const CT__ti_sysbios_BIOS_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".econst:ti_sysbios_BIOS_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((const CT__ti_sysbios_BIOS_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".econst:ti_sysbios_BIOS_Module__id__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x1bU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".econst:ti_sysbios_BIOS_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".econst:ti_sysbios_BIOS_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((const CT__ti_sysbios_BIOS_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".econst:ti_sysbios_BIOS_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".econst:ti_sysbios_BIOS_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".econst:ti_sysbios_BIOS_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".econst:ti_sysbios_BIOS_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".econst:ti_sysbios_BIOS_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".econst:ti_sysbios_BIOS_Object__count__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".econst:ti_sysbios_BIOS_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".econst:ti_sysbios_BIOS_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".econst:ti_sysbios_BIOS_Object__table__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = NULL;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".econst:ti_sysbios_BIOS_smpEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* mpeEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_mpeEnabled__C, ".econst:ti_sysbios_BIOS_mpeEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_mpeEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_mpeEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_mpeEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".econst:ti_sysbios_BIOS_cpuFreq__C");
asm("	.sect \".econst:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0U,  /* hi */
    (xdc_Bits32)0xbebc200U,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".econst:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_runtimeCreatesEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_runtimeCreatesEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_runtimeCreatesEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".econst:ti_sysbios_BIOS_taskEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".econst:ti_sysbios_BIOS_swiEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".econst:ti_sysbios_BIOS_clockEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* defaultKernelHeapInstance__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_defaultKernelHeapInstance__C, ".econst:ti_sysbios_BIOS_defaultKernelHeapInstance__C");
asm("	.sect \".econst:ti_sysbios_BIOS_defaultKernelHeapInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_defaultKernelHeapInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_defaultKernelHeapInstance__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C = 0;

/* kernelHeapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSize__C, ".econst:ti_sysbios_BIOS_kernelHeapSize__C");
asm("	.sect \".econst:ti_sysbios_BIOS_kernelHeapSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_kernelHeapSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_kernelHeapSize__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C = (xdc_SizeT)0x1000;

/* kernelHeapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSection__C, ".econst:ti_sysbios_BIOS_kernelHeapSection__C");
asm("	.sect \".econst:ti_sysbios_BIOS_kernelHeapSection__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_kernelHeapSection__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_kernelHeapSection__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C = ".kernel_heap";

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".econst:ti_sysbios_BIOS_heapSize__C");
asm("	.sect \".econst:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x0;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".econst:ti_sysbios_BIOS_heapSection__C");
asm("	.sect \".econst:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = ".ebss:taskStackSection";

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".econst:ti_sysbios_BIOS_heapTrackEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_heapTrackEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_heapTrackEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_heapTrackEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".econst:ti_sysbios_BIOS_setupSecureContext__C");
asm("	.sect \".econst:ti_sysbios_BIOS_setupSecureContext__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_setupSecureContext__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_setupSecureContext__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".econst:ti_sysbios_BIOS_useSK__C");
asm("	.sect \".econst:ti_sysbios_BIOS_useSK__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_useSK__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_useSK__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".econst:ti_sysbios_BIOS_installedErrorHook__C");
asm("	.sect \".econst:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((const CT__ti_sysbios_BIOS_installedErrorHook)(xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.c28.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c28_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__PARAMS__C, ".econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_family_c28_Hwi_Params ti_sysbios_family_c28_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_c28_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_c28_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0x0,  /* priority */
    (xdc_Bits16)0x0U,  /* disableMask */
    (xdc_Bits16)0x0U,  /* restoreMask */
    1,  /* enableAck */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_c28_Hwi_Module__ ti_sysbios_family_c28_Hwi_Module__root__V = {
    {&ti_sysbios_family_c28_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_c28_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_c28_Hwi_Object__ ti_sysbios_family_c28_Hwi_Object__table__V[3] = {
    {/* instance#0 */
        0,
        (xdc_UInt)0x26U,  /* intNum */
        1,  /* enableInt */
        1,  /* enableAck */
        (xdc_Bits16)0x1U,  /* disableMask */
        (xdc_Bits16)0x1U,  /* restoreMask */
        (xdc_Bits16)0x1U,  /* ierBitMask */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(myTickFxn)),  /* fxn */
        ((xdc_UArg)NULL),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        (xdc_UInt)0xeU,  /* intNum */
        1,  /* enableInt */
        1,  /* enableAck */
        (xdc_Bits16)0x2000U,  /* disableMask */
        (xdc_Bits16)0x2000U,  /* restoreMask */
        (xdc_Bits16)0x2000U,  /* ierBitMask */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_doTick__I)),  /* fxn */
        ((xdc_UArg)NULL),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#2 */
        0,
        (xdc_UInt)0x20U,  /* intNum */
        1,  /* enableInt */
        1,  /* enableAck */
        (xdc_Bits16)0x1U,  /* disableMask */
        (xdc_Bits16)0x1U,  /* restoreMask */
        (xdc_Bits16)0x1U,  /* ierBitMask */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(myHwi)),  /* fxn */
        ((xdc_UArg)NULL),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_c28_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_c28_Hwi_Module_State__dispatchTable ti_sysbios_family_c28_Hwi_Module_State_0_dispatchTable__A[224] = {
    0,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
    (ti_sysbios_family_c28_Hwi_Handle)&ti_sysbios_family_c28_Hwi_Object__table__V[1],  /* [14] */
    0,  /* [15] */
    0,  /* [16] */
    0,  /* [17] */
    0,  /* [18] */
    0,  /* [19] */
    0,  /* [20] */
    0,  /* [21] */
    0,  /* [22] */
    0,  /* [23] */
    0,  /* [24] */
    0,  /* [25] */
    0,  /* [26] */
    0,  /* [27] */
    0,  /* [28] */
    0,  /* [29] */
    0,  /* [30] */
    0,  /* [31] */
    (ti_sysbios_family_c28_Hwi_Handle)&ti_sysbios_family_c28_Hwi_Object__table__V[2],  /* [32] */
    0,  /* [33] */
    0,  /* [34] */
    0,  /* [35] */
    0,  /* [36] */
    0,  /* [37] */
    (ti_sysbios_family_c28_Hwi_Handle)&ti_sysbios_family_c28_Hwi_Object__table__V[0],  /* [38] */
    0,  /* [39] */
    0,  /* [40] */
    0,  /* [41] */
    0,  /* [42] */
    0,  /* [43] */
    0,  /* [44] */
    0,  /* [45] */
    0,  /* [46] */
    0,  /* [47] */
    0,  /* [48] */
    0,  /* [49] */
    0,  /* [50] */
    0,  /* [51] */
    0,  /* [52] */
    0,  /* [53] */
    0,  /* [54] */
    0,  /* [55] */
    0,  /* [56] */
    0,  /* [57] */
    0,  /* [58] */
    0,  /* [59] */
    0,  /* [60] */
    0,  /* [61] */
    0,  /* [62] */
    0,  /* [63] */
    0,  /* [64] */
    0,  /* [65] */
    0,  /* [66] */
    0,  /* [67] */
    0,  /* [68] */
    0,  /* [69] */
    0,  /* [70] */
    0,  /* [71] */
    0,  /* [72] */
    0,  /* [73] */
    0,  /* [74] */
    0,  /* [75] */
    0,  /* [76] */
    0,  /* [77] */
    0,  /* [78] */
    0,  /* [79] */
    0,  /* [80] */
    0,  /* [81] */
    0,  /* [82] */
    0,  /* [83] */
    0,  /* [84] */
    0,  /* [85] */
    0,  /* [86] */
    0,  /* [87] */
    0,  /* [88] */
    0,  /* [89] */
    0,  /* [90] */
    0,  /* [91] */
    0,  /* [92] */
    0,  /* [93] */
    0,  /* [94] */
    0,  /* [95] */
    0,  /* [96] */
    0,  /* [97] */
    0,  /* [98] */
    0,  /* [99] */
    0,  /* [100] */
    0,  /* [101] */
    0,  /* [102] */
    0,  /* [103] */
    0,  /* [104] */
    0,  /* [105] */
    0,  /* [106] */
    0,  /* [107] */
    0,  /* [108] */
    0,  /* [109] */
    0,  /* [110] */
    0,  /* [111] */
    0,  /* [112] */
    0,  /* [113] */
    0,  /* [114] */
    0,  /* [115] */
    0,  /* [116] */
    0,  /* [117] */
    0,  /* [118] */
    0,  /* [119] */
    0,  /* [120] */
    0,  /* [121] */
    0,  /* [122] */
    0,  /* [123] */
    0,  /* [124] */
    0,  /* [125] */
    0,  /* [126] */
    0,  /* [127] */
    0,  /* [128] */
    0,  /* [129] */
    0,  /* [130] */
    0,  /* [131] */
    0,  /* [132] */
    0,  /* [133] */
    0,  /* [134] */
    0,  /* [135] */
    0,  /* [136] */
    0,  /* [137] */
    0,  /* [138] */
    0,  /* [139] */
    0,  /* [140] */
    0,  /* [141] */
    0,  /* [142] */
    0,  /* [143] */
    0,  /* [144] */
    0,  /* [145] */
    0,  /* [146] */
    0,  /* [147] */
    0,  /* [148] */
    0,  /* [149] */
    0,  /* [150] */
    0,  /* [151] */
    0,  /* [152] */
    0,  /* [153] */
    0,  /* [154] */
    0,  /* [155] */
    0,  /* [156] */
    0,  /* [157] */
    0,  /* [158] */
    0,  /* [159] */
    0,  /* [160] */
    0,  /* [161] */
    0,  /* [162] */
    0,  /* [163] */
    0,  /* [164] */
    0,  /* [165] */
    0,  /* [166] */
    0,  /* [167] */
    0,  /* [168] */
    0,  /* [169] */
    0,  /* [170] */
    0,  /* [171] */
    0,  /* [172] */
    0,  /* [173] */
    0,  /* [174] */
    0,  /* [175] */
    0,  /* [176] */
    0,  /* [177] */
    0,  /* [178] */
    0,  /* [179] */
    0,  /* [180] */
    0,  /* [181] */
    0,  /* [182] */
    0,  /* [183] */
    0,  /* [184] */
    0,  /* [185] */
    0,  /* [186] */
    0,  /* [187] */
    0,  /* [188] */
    0,  /* [189] */
    0,  /* [190] */
    0,  /* [191] */
    0,  /* [192] */
    0,  /* [193] */
    0,  /* [194] */
    0,  /* [195] */
    0,  /* [196] */
    0,  /* [197] */
    0,  /* [198] */
    0,  /* [199] */
    0,  /* [200] */
    0,  /* [201] */
    0,  /* [202] */
    0,  /* [203] */
    0,  /* [204] */
    0,  /* [205] */
    0,  /* [206] */
    0,  /* [207] */
    0,  /* [208] */
    0,  /* [209] */
    0,  /* [210] */
    0,  /* [211] */
    0,  /* [212] */
    0,  /* [213] */
    0,  /* [214] */
    0,  /* [215] */
    0,  /* [216] */
    0,  /* [217] */
    0,  /* [218] */
    0,  /* [219] */
    0,  /* [220] */
    0,  /* [221] */
    0,  /* [222] */
    0,  /* [223] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_c28_Hwi_Module_State__ ti_sysbios_family_c28_Hwi_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_c28_Hwi_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_c28_Hwi_Module_State__ ti_sysbios_family_c28_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_c28_Hwi_Module__state__V")));
#endif
ti_sysbios_family_c28_Hwi_Module_State__ ti_sysbios_family_c28_Hwi_Module__state__V = {
    (xdc_Bits16)0x2001U,  /* ierMask */
    ((xdc_Char*)NULL),  /* isrStack */
    ((xdc_Char*)NULL),  /* taskSP */
    ((void*)ti_sysbios_family_c28_Hwi_Module_State_0_dispatchTable__A),  /* dispatchTable */
    ((xdc_UArg)NULL),  /* irp */
    0,  /* globalEnable */
    (xdc_Bits16)0x0U,  /* shadowIER */
    ((xdc_Ptr)((void*)&_stack)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&_STACK_SIZE)),  /* isrStackSize */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C, ".econst:ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__diagsEnabled ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C, ".econst:ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__diagsIncluded ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__diagsMask__C, ".econst:ti_sysbios_family_c28_Hwi_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__diagsMask ti_sysbios_family_c28_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_family_c28_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__gateObj__C, ".econst:ti_sysbios_family_c28_Hwi_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__gateObj ti_sysbios_family_c28_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_family_c28_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__gatePrms__C, ".econst:ti_sysbios_family_c28_Hwi_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__gatePrms ti_sysbios_family_c28_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_family_c28_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__id__C, ".econst:ti_sysbios_family_c28_Hwi_Module__id__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__id ti_sysbios_family_c28_Hwi_Module__id__C = (xdc_Bits16)0x17U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerDefined__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerDefined ti_sysbios_family_c28_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerObj__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerObj ti_sysbios_family_c28_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_family_c28_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn0 ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn1 ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn2 ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn4 ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn8 ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__count__C, ".econst:ti_sysbios_family_c28_Hwi_Object__count__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Object__count ti_sysbios_family_c28_Hwi_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__heap__C, ".econst:ti_sysbios_family_c28_Hwi_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Object__heap ti_sysbios_family_c28_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__sizeof__C, ".econst:ti_sysbios_family_c28_Hwi_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Object__sizeof ti_sysbios_family_c28_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_c28_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__table__C, ".econst:ti_sysbios_family_c28_Hwi_Object__table__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_Object__table ti_sysbios_family_c28_Hwi_Object__table__C = ti_sysbios_family_c28_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C, ".econst:ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C, ".econst:ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_dispatcherSwiSupport ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C, ".econst:ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_dispatcherTaskSupport ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C, ".econst:ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS_PIE__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_PIE__C, ".econst:ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_PIE__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_PIE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_PIE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_PIE__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_PIE ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_PIE__C = (xdc_Int)0xc0;

/* NUM_INTERRUPTS_ALL__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_ALL__C, ".econst:ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_ALL__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_ALL__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_ALL__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_ALL__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_ALL ti_sysbios_family_c28_Hwi_NUM_INTERRUPTS_ALL__C = (xdc_Int)0xe0;

/* A_badIntNum__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_A_badIntNum__C, ".econst:ti_sysbios_family_c28_Hwi_A_badIntNum__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_A_badIntNum__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_A_badIntNum__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_A_badIntNum__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_A_badIntNum ti_sysbios_family_c28_Hwi_A_badIntNum__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_invalidArg__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_A_invalidArg__C, ".econst:ti_sysbios_family_c28_Hwi_A_invalidArg__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_A_invalidArg__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_A_invalidArg__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_A_invalidArg__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_A_invalidArg ti_sysbios_family_c28_Hwi_A_invalidArg__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_zeroLatencyConflict__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C, ".econst:ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* E_unpluggedInterrupt__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C, ".econst:ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C = (((xdc_runtime_Error_Id)9) << 16 | 0U);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_E_alreadyDefined__C, ".econst:ti_sysbios_family_c28_Hwi_E_alreadyDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_E_alreadyDefined ti_sysbios_family_c28_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)10) << 16 | 0U);

/* zeroLatencyIERMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C, ".econst:ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_zeroLatencyIERMask ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C = (xdc_Bits16)0x0U;

/* regsVCRC__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_regsVCRC__C, ".econst:ti_sysbios_family_c28_Hwi_regsVCRC__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_regsVCRC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_regsVCRC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_regsVCRC__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_regsVCRC ti_sysbios_family_c28_Hwi_regsVCRC__C = 0;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_LM_begin__C, ".econst:ti_sysbios_family_c28_Hwi_LM_begin__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_LM_begin__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_LM_begin ti_sysbios_family_c28_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)12) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_LD_end__C, ".econst:ti_sysbios_family_c28_Hwi_LD_end__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_LD_end__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_LD_end ti_sysbios_family_c28_Hwi_LD_end__C = (((xdc_runtime_Log_Event)13) << 16 | 512);

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_swiDisable__C, ".econst:ti_sysbios_family_c28_Hwi_swiDisable__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_swiDisable__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_swiDisable__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_swiDisable__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_swiDisable ti_sysbios_family_c28_Hwi_swiDisable__C = ((const CT__ti_sysbios_family_c28_Hwi_swiDisable)(ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_swiRestoreHwi__C, ".econst:ti_sysbios_family_c28_Hwi_swiRestoreHwi__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_swiRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_swiRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_swiRestoreHwi__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_swiRestoreHwi ti_sysbios_family_c28_Hwi_swiRestoreHwi__C = ((const CT__ti_sysbios_family_c28_Hwi_swiRestoreHwi)(ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_taskDisable__C, ".econst:ti_sysbios_family_c28_Hwi_taskDisable__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_taskDisable__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_taskDisable ti_sysbios_family_c28_Hwi_taskDisable__C = ((const CT__ti_sysbios_family_c28_Hwi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_taskRestoreHwi__C, ".econst:ti_sysbios_family_c28_Hwi_taskRestoreHwi__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_taskRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_taskRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_taskRestoreHwi__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_taskRestoreHwi ti_sysbios_family_c28_Hwi_taskRestoreHwi__C = ((const CT__ti_sysbios_family_c28_Hwi_taskRestoreHwi)(ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_hooks__C, ".econst:ti_sysbios_family_c28_Hwi_hooks__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_hooks__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Hwi_hooks ti_sysbios_family_c28_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.c28.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__id ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x19U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Object__count ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Object__heap ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Object__table ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.c28.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__diagsMask ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_c28_TaskSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__gateObj__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__gateObj ti_sysbios_family_c28_TaskSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_c28_TaskSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__gatePrms ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_c28_TaskSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__id__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__id__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__id ti_sysbios_family_c28_TaskSupport_Module__id__C = (xdc_Bits16)0x1aU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerDefined ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerObj ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0 ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1 ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2 ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4 ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8 ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Object__count__C, ".econst:ti_sysbios_family_c28_TaskSupport_Object__count__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Object__count ti_sysbios_family_c28_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Object__heap__C, ".econst:ti_sysbios_family_c28_TaskSupport_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Object__heap ti_sysbios_family_c28_TaskSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Object__sizeof__C, ".econst:ti_sysbios_family_c28_TaskSupport_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Object__sizeof ti_sysbios_family_c28_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Object__table__C, ".econst:ti_sysbios_family_c28_TaskSupport_Object__table__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Object__table ti_sysbios_family_c28_TaskSupport_Object__table__C = NULL;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_defaultStackSize__C, ".econst:ti_sysbios_family_c28_TaskSupport_defaultStackSize__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_defaultStackSize ti_sysbios_family_c28_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x100;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_stackAlignment__C, ".econst:ti_sysbios_family_c28_TaskSupport_stackAlignment__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_stackAlignment__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_stackAlignment__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_stackAlignment__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_stackAlignment ti_sysbios_family_c28_TaskSupport_stackAlignment__C = (xdc_UInt)0x2U;

/* E_invalidStack__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_E_invalidStack__C, ".econst:ti_sysbios_family_c28_TaskSupport_E_invalidStack__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_E_invalidStack__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_E_invalidStack__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_E_invalidStack__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_E_invalidStack ti_sysbios_family_c28_TaskSupport_E_invalidStack__C = (((xdc_runtime_Error_Id)12) << 16 | 0U);


/*
 * ======== ti.sysbios.family.c28.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c28_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__PARAMS__C, ".econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_family_c28_Timer_Params ti_sysbios_family_c28_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_c28_Timer_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_c28_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)NULL),  /* arg */
    (xdc_UInt32)0x0U,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x0U,  /* lo */
    },  /* extFreq */
    {
        (xdc_UInt)0x0U,  /* free */
        (xdc_UInt)0x0U,  /* soft */
    },  /* emulationModeInit */
    (xdc_UInt16)0x0U,  /* prescale */
    ((ti_sysbios_family_c28_Hwi_Params*)NULL),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_c28_Timer_Module__ ti_sysbios_family_c28_Timer_Module__root__V = {
    {&ti_sysbios_family_c28_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_c28_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_c28_Timer_Object__ ti_sysbios_family_c28_Timer_Object__table__V[3] = {
    {/* instance#0 */
        0,
        (xdc_Int)0x0,  /* id */
        {
            (xdc_UInt)0x0U,  /* free */
            (xdc_UInt)0x0U,  /* soft */
        },  /* emulationModeInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt32)0x1e8480U,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt16)0x0U,  /* prescale */
        (xdc_UInt)0x26U,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(myTickFxn)),  /* tickFxn */
        {
            (xdc_Bits32)0x0U,  /* hi */
            (xdc_Bits32)0x0U,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_c28_Hwi_Handle)&ti_sysbios_family_c28_Hwi_Object__table__V[0],  /* hwi */
    },
    {/* instance#1 */
        0,
        (xdc_Int)0x1,  /* id */
        {
            (xdc_UInt)0x0U,  /* free */
            (xdc_UInt)0x0U,  /* soft */
        },  /* emulationModeInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt32)0x5f5e100U,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt16)0x0U,  /* prescale */
        (xdc_UInt)0xdU,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))NULL),  /* tickFxn */
        {
            (xdc_Bits32)0x0U,  /* hi */
            (xdc_Bits32)0x0U,  /* lo */
        },  /* extFreq */
        0,  /* hwi */
    },
    {/* instance#2 */
        0,
        (xdc_Int)0x2,  /* id */
        {
            (xdc_UInt)0x0U,  /* free */
            (xdc_UInt)0x0U,  /* soft */
        },  /* emulationModeInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt32)0x30d40U,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt16)0x0U,  /* prescale */
        (xdc_UInt)0xeU,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0U,  /* hi */
            (xdc_Bits32)0x0U,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_c28_Hwi_Handle)&ti_sysbios_family_c28_Hwi_Object__table__V[1],  /* hwi */
    },
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_c28_Timer_Module_State__ ti_sysbios_family_c28_Timer_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_c28_Timer_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_c28_Timer_Module_State__ ti_sysbios_family_c28_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_c28_Timer_Module__state__V")));
#endif
ti_sysbios_family_c28_Timer_Module_State__ ti_sysbios_family_c28_Timer_Module__state__V = {
    (xdc_Char)0x0,  /* availMask */
    {
        (ti_sysbios_family_c28_Timer_Handle)&ti_sysbios_family_c28_Timer_Object__table__V[0],  /* [0] */
        (ti_sysbios_family_c28_Timer_Handle)&ti_sysbios_family_c28_Timer_Object__table__V[1],  /* [1] */
        (ti_sysbios_family_c28_Timer_Handle)&ti_sysbios_family_c28_Timer_Object__table__V[2],  /* [2] */
    },  /* staticTimers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__diagsEnabled__C, ".econst:ti_sysbios_family_c28_Timer_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__diagsEnabled ti_sysbios_family_c28_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__diagsIncluded__C, ".econst:ti_sysbios_family_c28_Timer_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__diagsIncluded ti_sysbios_family_c28_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__diagsMask__C, ".econst:ti_sysbios_family_c28_Timer_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__diagsMask ti_sysbios_family_c28_Timer_Module__diagsMask__C = ((const CT__ti_sysbios_family_c28_Timer_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__gateObj__C, ".econst:ti_sysbios_family_c28_Timer_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__gateObj ti_sysbios_family_c28_Timer_Module__gateObj__C = ((const CT__ti_sysbios_family_c28_Timer_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__gatePrms__C, ".econst:ti_sysbios_family_c28_Timer_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__gatePrms ti_sysbios_family_c28_Timer_Module__gatePrms__C = ((const CT__ti_sysbios_family_c28_Timer_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__id__C, ".econst:ti_sysbios_family_c28_Timer_Module__id__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__id ti_sysbios_family_c28_Timer_Module__id__C = (xdc_Bits16)0x18U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerDefined__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerDefined ti_sysbios_family_c28_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerObj__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerObj ti_sysbios_family_c28_Timer_Module__loggerObj__C = ((const CT__ti_sysbios_family_c28_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerFxn0__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn0 ti_sysbios_family_c28_Timer_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerFxn1__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn1 ti_sysbios_family_c28_Timer_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerFxn2__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn2 ti_sysbios_family_c28_Timer_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerFxn4__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn4 ti_sysbios_family_c28_Timer_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerFxn8__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn8 ti_sysbios_family_c28_Timer_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__count__C, ".econst:ti_sysbios_family_c28_Timer_Object__count__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Object__count ti_sysbios_family_c28_Timer_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__heap__C, ".econst:ti_sysbios_family_c28_Timer_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Object__heap ti_sysbios_family_c28_Timer_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__sizeof__C, ".econst:ti_sysbios_family_c28_Timer_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Object__sizeof ti_sysbios_family_c28_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_c28_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__table__C, ".econst:ti_sysbios_family_c28_Timer_Object__table__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_Object__table ti_sysbios_family_c28_Timer_Object__table__C = ti_sysbios_family_c28_Timer_Object__table__V;

/* A_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_A_invalidTimer__C, ".econst:ti_sysbios_family_c28_Timer_A_invalidTimer__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_A_invalidTimer__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_A_invalidTimer__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_A_invalidTimer__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_A_invalidTimer ti_sysbios_family_c28_Timer_A_invalidTimer__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_E_notAvailable__C, ".econst:ti_sysbios_family_c28_Timer_E_notAvailable__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_E_notAvailable__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_E_notAvailable__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_E_notAvailable__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_E_notAvailable ti_sysbios_family_c28_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)11) << 16 | 0U);

/* A_invalidRunMode__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_A_invalidRunMode__C, ".econst:ti_sysbios_family_c28_Timer_A_invalidRunMode__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_A_invalidRunMode__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_A_invalidRunMode__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_A_invalidRunMode__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_A_invalidRunMode ti_sysbios_family_c28_Timer_A_invalidRunMode__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_invalidHwiMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_A_invalidHwiMask__C, ".econst:ti_sysbios_family_c28_Timer_A_invalidHwiMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_A_invalidHwiMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_A_invalidHwiMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_A_invalidHwiMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_A_invalidHwiMask ti_sysbios_family_c28_Timer_A_invalidHwiMask__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_E_cannotSupport__C, ".econst:ti_sysbios_family_c28_Timer_E_cannotSupport__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_E_cannotSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_E_cannotSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_E_cannotSupport__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_E_cannotSupport ti_sysbios_family_c28_Timer_E_cannotSupport__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_anyMask__C, ".econst:ti_sysbios_family_c28_Timer_anyMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_anyMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_anyMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_anyMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_anyMask ti_sysbios_family_c28_Timer_anyMask__C = (xdc_UInt)0x7U;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_startupNeeded__C, ".econst:ti_sysbios_family_c28_Timer_startupNeeded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_startupNeeded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_startupNeeded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_startupNeeded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_startupNeeded ti_sysbios_family_c28_Timer_startupNeeded__C = (xdc_UInt)0x1U;

/* intNumDef__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_intNumDef__C, ".econst:ti_sysbios_family_c28_Timer_intNumDef__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_intNumDef__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_intNumDef__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_intNumDef__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_Timer_intNumDef ti_sysbios_family_c28_Timer_intNumDef__C = {
    (xdc_UInt8)0x26U,  /* [0] */
    (xdc_UInt8)0xdU,  /* [1] */
    (xdc_UInt8)0xeU,  /* [2] */
};


/*
 * ======== ti.sysbios.family.c28.f2837x.TimestampProvider INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsEnabled__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsEnabled ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsIncluded__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsIncluded ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsMask__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsMask ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsMask__C = ((const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gateObj__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gateObj ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gateObj__C = ((const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gatePrms__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gatePrms ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gatePrms__C = ((const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__id__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__id__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__id ti_sysbios_family_c28_f2837x_TimestampProvider_Module__id__C = (xdc_Bits16)0x2dU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerDefined__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerDefined ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerObj__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerObj ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerObj__C = ((const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn0__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn1__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn2__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn4__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn8__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Object__count__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__count__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Object__count ti_sysbios_family_c28_f2837x_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Object__heap__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Object__heap ti_sysbios_family_c28_f2837x_TimestampProvider_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Object__sizeof__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Object__sizeof ti_sysbios_family_c28_f2837x_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c28_f2837x_TimestampProvider_Object__table__C, ".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__table__C");
asm("	.sect \".econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_f2837x_TimestampProvider_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_family_c28_f2837x_TimestampProvider_Object__table ti_sysbios_family_c28_f2837x_TimestampProvider_Object__table__C = NULL;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".econst:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".econst:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".econst:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateHwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".econst:ti_sysbios_gates_GateHwi_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".econst:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".econst:ti_sysbios_gates_GateHwi_Module__id__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x2bU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".econst:ti_sysbios_gates_GateHwi_Object__count__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".econst:ti_sysbios_gates_GateHwi_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".econst:ti_sysbios_gates_GateHwi_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".econst:ti_sysbios_gates_GateHwi_Object__table__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1U,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1U,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".econst:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".econst:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".econst:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateMutex_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".econst:ti_sysbios_gates_GateMutex_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".econst:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".econst:ti_sysbios_gates_GateMutex_Module__id__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x2cU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".econst:ti_sysbios_gates_GateMutex_Object__count__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".econst:ti_sysbios_gates_GateMutex_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".econst:ti_sysbios_gates_GateMutex_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".econst:ti_sysbios_gates_GateMutex_Object__table__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".econst:ti_sysbios_gates_GateMutex_A_badContext__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".econst:ti_sysbios_hal_Hwi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_c28_Hwi_Object__table__V[2],  /* pi */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".econst:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".econst:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".econst:ti_sysbios_hal_Hwi_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".econst:ti_sysbios_hal_Hwi_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".econst:ti_sysbios_hal_Hwi_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".econst:ti_sysbios_hal_Hwi_Module__id__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x27U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".econst:ti_sysbios_hal_Hwi_Object__count__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".econst:ti_sysbios_hal_Hwi_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".econst:ti_sysbios_hal_Hwi_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".econst:ti_sysbios_hal_Hwi_Object__table__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".econst:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".econst:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".econst:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".econst:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".econst:ti_sysbios_hal_Hwi_E_stackOverflow__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)20) << 16 | 0U);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".econst:ti_sysbios_hal_Timer_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)NULL),  /* arg */
    (xdc_UInt32)0x0U,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x0U,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_family_c28_Timer_Object__table__V[1],  /* pi */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".econst:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".econst:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".econst:ti_sysbios_hal_Timer_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Timer_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".econst:ti_sysbios_hal_Timer_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((const CT__ti_sysbios_hal_Timer_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".econst:ti_sysbios_hal_Timer_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Timer_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".econst:ti_sysbios_hal_Timer_Module__id__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x28U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".econst:ti_sysbios_hal_Timer_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".econst:ti_sysbios_hal_Timer_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".econst:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".econst:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".econst:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".econst:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".econst:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".econst:ti_sysbios_hal_Timer_Object__count__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".econst:ti_sysbios_hal_Timer_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".econst:ti_sysbios_hal_Timer_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".econst:ti_sysbios_hal_Timer_Object__table__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".econst:ti_sysbios_knl_Clock_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0U,  /* period */
    ((xdc_UArg)NULL),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Clock_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0U,  /* ticks */
    (xdc_UInt)0x0U,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_c28_Timer_Object__table__V[2],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1U,  /* numTickSkip */
    (xdc_UInt32)0x1U,  /* nextScheduledTick */
    (xdc_UInt32)0x0U,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".econst:ti_sysbios_knl_Clock_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Clock_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".econst:ti_sysbios_knl_Clock_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((const CT__ti_sysbios_knl_Clock_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".econst:ti_sysbios_knl_Clock_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Clock_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".econst:ti_sysbios_knl_Clock_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x1dU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Clock_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".econst:ti_sysbios_knl_Clock_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".econst:ti_sysbios_knl_Clock_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".econst:ti_sysbios_knl_Clock_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".econst:ti_sysbios_knl_Clock_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".econst:ti_sysbios_knl_Clock_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = NULL;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".econst:ti_sysbios_knl_Clock_LW_delayed__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)14) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".econst:ti_sysbios_knl_Clock_LM_tick__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)15) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".econst:ti_sysbios_knl_Clock_LM_begin__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)16) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".econst:ti_sysbios_knl_Clock_A_clockDisabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".econst:ti_sysbios_knl_Clock_A_badThreadType__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".econst:ti_sysbios_knl_Clock_serviceMargin__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_serviceMargin__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_serviceMargin__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_serviceMargin__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0U;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".econst:ti_sysbios_knl_Clock_tickSource__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".econst:ti_sysbios_knl_Clock_tickMode__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".econst:ti_sysbios_knl_Clock_timerId__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".econst:ti_sysbios_knl_Clock_tickPeriod__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8U;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".econst:ti_sysbios_knl_Clock_doTickFunc__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_doTickFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_doTickFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_doTickFunc__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((const CT__ti_sysbios_knl_Clock_doTickFunc)(ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".econst:ti_sysbios_knl_Clock_triggerClock__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_triggerClock__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_triggerClock__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_triggerClock__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".econst:ti_sysbios_knl_Idle_funcList__A");
asm("	.sect \".econst:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");

const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3] = {
    ((xdc_Void(*)(xdc_Void))(myIdleFxn)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(myIdleFxn2)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_checkStack)),  /* [2] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".econst:ti_sysbios_knl_Idle_coreList__A");
asm("	.sect \".econst:ti_sysbios_knl_Idle_coreList__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_coreList__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_coreList__A\"");
asm("	.clink ");

const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3] = {
    (xdc_UInt)0x0U,  /* [0] */
    (xdc_UInt)0x0U,  /* [1] */
    (xdc_UInt)0x0U,  /* [2] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".econst:ti_sysbios_knl_Idle_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Idle_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".econst:ti_sysbios_knl_Idle_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((const CT__ti_sysbios_knl_Idle_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".econst:ti_sysbios_knl_Idle_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Idle_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".econst:ti_sysbios_knl_Idle_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x1eU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Idle_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".econst:ti_sysbios_knl_Idle_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".econst:ti_sysbios_knl_Idle_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".econst:ti_sysbios_knl_Idle_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".econst:ti_sysbios_knl_Idle_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".econst:ti_sysbios_knl_Idle_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = NULL;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".econst:ti_sysbios_knl_Idle_funcList__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {3, ((__T1_ti_sysbios_knl_Idle_funcList const  *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".econst:ti_sysbios_knl_Idle_coreList__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_coreList__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_coreList__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_coreList__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {3, ((__T1_ti_sysbios_knl_Idle_coreList const  *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".econst:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".econst:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".econst:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".econst:ti_sysbios_knl_Intrinsics_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x1fU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".econst:ti_sysbios_knl_Intrinsics_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".econst:ti_sysbios_knl_Intrinsics_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".econst:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".econst:ti_sysbios_knl_Intrinsics_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".econst:ti_sysbios_knl_Queue_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".econst:ti_sysbios_knl_Queue_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Queue_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".econst:ti_sysbios_knl_Queue_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((const CT__ti_sysbios_knl_Queue_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".econst:ti_sysbios_knl_Queue_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Queue_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".econst:ti_sysbios_knl_Queue_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x20U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Queue_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".econst:ti_sysbios_knl_Queue_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".econst:ti_sysbios_knl_Queue_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".econst:ti_sysbios_knl_Queue_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".econst:ti_sysbios_knl_Queue_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".econst:ti_sysbios_knl_Queue_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1U,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".econst:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Semaphore_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".econst:ti_sysbios_knl_Semaphore_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".econst:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".econst:ti_sysbios_knl_Semaphore_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x21U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".econst:ti_sysbios_knl_Semaphore_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".econst:ti_sysbios_knl_Semaphore_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".econst:ti_sysbios_knl_Semaphore_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".econst:ti_sysbios_knl_Semaphore_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = NULL;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".econst:ti_sysbios_knl_Semaphore_LM_post__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)17) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".econst:ti_sysbios_knl_Semaphore_LM_pend__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)18) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".econst:ti_sysbios_knl_Semaphore_A_noEvents__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".econst:ti_sysbios_knl_Semaphore_A_invTimeout__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".econst:ti_sysbios_knl_Semaphore_A_badContext__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".econst:ti_sysbios_knl_Semaphore_A_overflow__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_A_overflow__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_A_overflow__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_A_overflow__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".econst:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C, ".econst:ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)13) << 16 | 0U);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".econst:ti_sysbios_knl_Semaphore_supportsEvents__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".econst:ti_sysbios_knl_Semaphore_supportsPriority__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_supportsPriority__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_supportsPriority__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_supportsPriority__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".econst:ti_sysbios_knl_Semaphore_eventPost__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((const CT__ti_sysbios_knl_Semaphore_eventPost)NULL);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".econst:ti_sysbios_knl_Semaphore_eventSync__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((const CT__ti_sysbios_knl_Semaphore_eventSync)NULL);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".econst:ti_sysbios_knl_Swi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0U,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xfU,  /* priority */
        (xdc_UInt)0x8000U,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0U,  /* initTrigger */
        (xdc_UInt)0x0U,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Swi_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0U,  /* curSet */
    (xdc_UInt)0x0U,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".econst:ti_sysbios_knl_Swi_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".econst:ti_sysbios_knl_Swi_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((const CT__ti_sysbios_knl_Swi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".econst:ti_sysbios_knl_Swi_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Swi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".econst:ti_sysbios_knl_Swi_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x22U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Swi_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".econst:ti_sysbios_knl_Swi_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".econst:ti_sysbios_knl_Swi_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".econst:ti_sysbios_knl_Swi_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".econst:ti_sysbios_knl_Swi_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".econst:ti_sysbios_knl_Swi_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".econst:ti_sysbios_knl_Swi_LM_begin__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)19) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".econst:ti_sysbios_knl_Swi_LD_end__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)20) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".econst:ti_sysbios_knl_Swi_LM_post__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)21) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".econst:ti_sysbios_knl_Swi_A_swiDisabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".econst:ti_sysbios_knl_Swi_A_badPriority__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badContextId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badContextId__C, ".econst:ti_sysbios_knl_Swi_A_badContextId__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_A_badContextId__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_A_badContextId__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_A_badContextId__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_A_badContextId ti_sysbios_knl_Swi_A_badContextId__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".econst:ti_sysbios_knl_Swi_numPriorities__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10U;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".econst:ti_sysbios_knl_Swi_hooks__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".econst:ti_sysbios_knl_Swi_taskDisable__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((const CT__ti_sysbios_knl_Swi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".econst:ti_sysbios_knl_Swi_taskRestore__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((const CT__ti_sysbios_knl_Swi_taskRestore)(ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".econst:ti_sysbios_knl_Swi_numConstructedSwis__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0U;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".econst:ti_sysbios_knl_Task_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)NULL),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)NULL),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0U,  /* affinity */
    1,  /* privileged */
    ((xdc_Ptr)NULL),  /* domain */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[256];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1U,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x100,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0U,  /* curCoreId */
        (xdc_UInt)0x0U,  /* affinity */
        1,  /* privileged */
        ((xdc_Ptr)NULL),  /* domain */
        (xdc_UInt32)0x0U,  /* checkValue */
        ((xdc_Ptr)NULL),  /* tls */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Task_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0U,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1U,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    1,  /* curTaskPrivileged */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Task_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Task_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".econst:ti_sysbios_knl_Task_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Task_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".econst:ti_sysbios_knl_Task_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((const CT__ti_sysbios_knl_Task_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".econst:ti_sysbios_knl_Task_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Task_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".econst:ti_sysbios_knl_Task_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x23U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Task_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".econst:ti_sysbios_knl_Task_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Task_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Task_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Task_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Task_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Task_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".econst:ti_sysbios_knl_Task_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".econst:ti_sysbios_knl_Task_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".econst:ti_sysbios_knl_Task_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".econst:ti_sysbios_knl_Task_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".econst:ti_sysbios_knl_Task_LM_switch__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)22) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".econst:ti_sysbios_knl_Task_LM_sleep__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)23) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".econst:ti_sysbios_knl_Task_LD_ready__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)24) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".econst:ti_sysbios_knl_Task_LD_block__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)25) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".econst:ti_sysbios_knl_Task_LM_yield__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)26) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".econst:ti_sysbios_knl_Task_LM_setPri__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)27) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".econst:ti_sysbios_knl_Task_LD_exit__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)28) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".econst:ti_sysbios_knl_Task_LM_setAffinity__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_setAffinity__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_setAffinity__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_setAffinity__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)29) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".econst:ti_sysbios_knl_Task_LM_schedule__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_schedule__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_schedule__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_schedule__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)30) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".econst:ti_sysbios_knl_Task_LM_noWork__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_noWork__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_noWork__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_noWork__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)31) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".econst:ti_sysbios_knl_Task_E_stackOverflow__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)14) << 16 | 0U);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".econst:ti_sysbios_knl_Task_E_spOutOfBounds__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)15) << 16 | 0U);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".econst:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_E_deleteNotAllowed__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_E_deleteNotAllowed__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_E_deleteNotAllowed__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)16) << 16 | 0U);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".econst:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)17) << 16 | 0U);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".econst:ti_sysbios_knl_Task_E_objectCheckFailed__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_E_objectCheckFailed__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_E_objectCheckFailed__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_E_objectCheckFailed__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)18) << 16 | 0U);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectNotInKernelSpace__C, ".econst:ti_sysbios_knl_Task_E_objectNotInKernelSpace__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_E_objectNotInKernelSpace__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_E_objectNotInKernelSpace__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_E_objectNotInKernelSpace__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)19) << 16 | 0U);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".econst:ti_sysbios_knl_Task_A_badThreadType__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".econst:ti_sysbios_knl_Task_A_badTaskState__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".econst:ti_sysbios_knl_Task_A_noPendElem__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".econst:ti_sysbios_knl_Task_A_taskDisabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".econst:ti_sysbios_knl_Task_A_badPriority__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".econst:ti_sysbios_knl_Task_A_badTimeout__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".econst:ti_sysbios_knl_Task_A_badAffinity__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_badAffinity__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_badAffinity__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_badAffinity__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".econst:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_sleepTaskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_sleepTaskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_sleepTaskDisabled__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".econst:ti_sysbios_knl_Task_A_invalidCoreId__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_invalidCoreId__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_invalidCoreId__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_invalidCoreId__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badContextId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badContextId__C, ".econst:ti_sysbios_knl_Task_A_badContextId__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_badContextId__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_badContextId__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_badContextId__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_A_badContextId ti_sysbios_knl_Task_A_badContextId__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".econst:ti_sysbios_knl_Task_numPriorities__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10U;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".econst:ti_sysbios_knl_Task_defaultStackSize__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x100;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".econst:ti_sysbios_knl_Task_defaultStackHeap__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".econst:ti_sysbios_knl_Task_allBlockedFunc__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((const CT__ti_sysbios_knl_Task_allBlockedFunc)NULL);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".econst:ti_sysbios_knl_Task_initStackFlag__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".econst:ti_sysbios_knl_Task_checkStackFlag__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_checkStackFlag__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_checkStackFlag__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_checkStackFlag__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".econst:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".econst:ti_sysbios_knl_Task_hooks__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".econst:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_moduleStateCheckFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_moduleStateCheckFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_moduleStateCheckFxn__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckFxn)(ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".econst:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)(ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".econst:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_moduleStateCheckFlag__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_moduleStateCheckFlag__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_moduleStateCheckFlag__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".econst:ti_sysbios_knl_Task_objectCheckFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_objectCheckFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_objectCheckFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_objectCheckFxn__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckFxn)(ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".econst:ti_sysbios_knl_Task_objectCheckValueFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_objectCheckValueFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_objectCheckValueFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_objectCheckValueFxn__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckValueFxn)(ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".econst:ti_sysbios_knl_Task_objectCheckFlag__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_objectCheckFlag__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_objectCheckFlag__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_objectCheckFlag__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".econst:ti_sysbios_knl_Task_numConstructedTasks__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0U;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".econst:ti_sysbios_knl_Task_startupHookFunc__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_startupHookFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_startupHookFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_startupHookFunc__C\"");
asm("	.clink ");

__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((const CT__ti_sysbios_knl_Task_startupHookFunc)NULL);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".econst:xdc_runtime_Assert_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".econst:xdc_runtime_Assert_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".econst:xdc_runtime_Assert_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((const CT__xdc_runtime_Assert_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".econst:xdc_runtime_Assert_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((const CT__xdc_runtime_Assert_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".econst:xdc_runtime_Assert_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((const CT__xdc_runtime_Assert_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".econst:xdc_runtime_Assert_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x1U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".econst:xdc_runtime_Assert_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".econst:xdc_runtime_Assert_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((const CT__xdc_runtime_Assert_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".econst:xdc_runtime_Assert_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".econst:xdc_runtime_Assert_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".econst:xdc_runtime_Assert_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".econst:xdc_runtime_Assert_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".econst:xdc_runtime_Assert_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".econst:xdc_runtime_Assert_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".econst:xdc_runtime_Assert_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".econst:xdc_runtime_Assert_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".econst:xdc_runtime_Assert_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = NULL;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".econst:xdc_runtime_Assert_E_assertFailed__C");
asm("	.sect \".econst:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)1) << 16 | 0U);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".econst:xdc_runtime_Core_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".econst:xdc_runtime_Core_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".econst:xdc_runtime_Core_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((const CT__xdc_runtime_Core_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".econst:xdc_runtime_Core_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((const CT__xdc_runtime_Core_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".econst:xdc_runtime_Core_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((const CT__xdc_runtime_Core_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".econst:xdc_runtime_Core_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x2U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".econst:xdc_runtime_Core_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".econst:xdc_runtime_Core_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((const CT__xdc_runtime_Core_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".econst:xdc_runtime_Core_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((const CT__xdc_runtime_Core_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".econst:xdc_runtime_Core_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((const CT__xdc_runtime_Core_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".econst:xdc_runtime_Core_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((const CT__xdc_runtime_Core_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".econst:xdc_runtime_Core_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((const CT__xdc_runtime_Core_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".econst:xdc_runtime_Core_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((const CT__xdc_runtime_Core_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".econst:xdc_runtime_Core_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".econst:xdc_runtime_Core_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".econst:xdc_runtime_Core_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".econst:xdc_runtime_Core_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = NULL;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".econst:xdc_runtime_Core_A_initializedParams__C");
asm("	.sect \".econst:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".econst:xdc_runtime_Defaults_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".econst:xdc_runtime_Defaults_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".econst:xdc_runtime_Defaults_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((const CT__xdc_runtime_Defaults_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".econst:xdc_runtime_Defaults_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((const CT__xdc_runtime_Defaults_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".econst:xdc_runtime_Defaults_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((const CT__xdc_runtime_Defaults_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".econst:xdc_runtime_Defaults_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x3U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".econst:xdc_runtime_Defaults_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".econst:xdc_runtime_Defaults_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((const CT__xdc_runtime_Defaults_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".econst:xdc_runtime_Defaults_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".econst:xdc_runtime_Defaults_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".econst:xdc_runtime_Defaults_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".econst:xdc_runtime_Defaults_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".econst:xdc_runtime_Defaults_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".econst:xdc_runtime_Defaults_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".econst:xdc_runtime_Defaults_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".econst:xdc_runtime_Defaults_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".econst:xdc_runtime_Defaults_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".econst:xdc_runtime_Diags_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".econst:xdc_runtime_Diags_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".econst:xdc_runtime_Diags_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((const CT__xdc_runtime_Diags_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".econst:xdc_runtime_Diags_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((const CT__xdc_runtime_Diags_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".econst:xdc_runtime_Diags_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((const CT__xdc_runtime_Diags_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".econst:xdc_runtime_Diags_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x4U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".econst:xdc_runtime_Diags_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".econst:xdc_runtime_Diags_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((const CT__xdc_runtime_Diags_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".econst:xdc_runtime_Diags_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".econst:xdc_runtime_Diags_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".econst:xdc_runtime_Diags_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".econst:xdc_runtime_Diags_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".econst:xdc_runtime_Diags_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".econst:xdc_runtime_Diags_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".econst:xdc_runtime_Diags_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".econst:xdc_runtime_Diags_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".econst:xdc_runtime_Diags_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = NULL;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".econst:xdc_runtime_Diags_setMaskEnabled__C");
asm("	.sect \".econst:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".econst:xdc_runtime_Diags_dictBase__C");
asm("	.sect \".econst:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((const CT__xdc_runtime_Diags_dictBase)NULL);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data:xdc_runtime_Error_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0U,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".econst:xdc_runtime_Error_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".econst:xdc_runtime_Error_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".econst:xdc_runtime_Error_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((const CT__xdc_runtime_Error_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".econst:xdc_runtime_Error_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((const CT__xdc_runtime_Error_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".econst:xdc_runtime_Error_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((const CT__xdc_runtime_Error_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".econst:xdc_runtime_Error_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x5U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".econst:xdc_runtime_Error_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".econst:xdc_runtime_Error_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((const CT__xdc_runtime_Error_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".econst:xdc_runtime_Error_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((const CT__xdc_runtime_Error_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".econst:xdc_runtime_Error_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((const CT__xdc_runtime_Error_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".econst:xdc_runtime_Error_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((const CT__xdc_runtime_Error_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".econst:xdc_runtime_Error_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((const CT__xdc_runtime_Error_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".econst:xdc_runtime_Error_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((const CT__xdc_runtime_Error_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".econst:xdc_runtime_Error_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".econst:xdc_runtime_Error_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".econst:xdc_runtime_Error_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".econst:xdc_runtime_Error_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = NULL;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".econst:xdc_runtime_Error_policyFxn__C");
asm("	.sect \".econst:xdc_runtime_Error_policyFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_policyFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_policyFxn__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((const CT__xdc_runtime_Error_policyFxn)(xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".econst:xdc_runtime_Error_E_generic__C");
asm("	.sect \".econst:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)2) << 16 | 0U);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".econst:xdc_runtime_Error_E_memory__C");
asm("	.sect \".econst:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3) << 16 | 0U);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".econst:xdc_runtime_Error_E_msgCode__C");
asm("	.sect \".econst:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)4) << 16 | 0U);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".econst:xdc_runtime_Error_policy__C");
asm("	.sect \".econst:xdc_runtime_Error_policy__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_policy__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_policy__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".econst:xdc_runtime_Error_raiseHook__C");
asm("	.sect \".econst:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((const CT__xdc_runtime_Error_raiseHook)(ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".econst:xdc_runtime_Error_maxDepth__C");
asm("	.sect \".econst:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10U;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".econst:xdc_runtime_Gate_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".econst:xdc_runtime_Gate_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".econst:xdc_runtime_Gate_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((const CT__xdc_runtime_Gate_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".econst:xdc_runtime_Gate_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((const CT__xdc_runtime_Gate_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".econst:xdc_runtime_Gate_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((const CT__xdc_runtime_Gate_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".econst:xdc_runtime_Gate_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x6U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".econst:xdc_runtime_Gate_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".econst:xdc_runtime_Gate_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((const CT__xdc_runtime_Gate_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".econst:xdc_runtime_Gate_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".econst:xdc_runtime_Gate_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".econst:xdc_runtime_Gate_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".econst:xdc_runtime_Gate_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".econst:xdc_runtime_Gate_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".econst:xdc_runtime_Gate_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".econst:xdc_runtime_Gate_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".econst:xdc_runtime_Gate_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".econst:xdc_runtime_Gate_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = NULL;


/*
 * ======== xdc.runtime.HeapStd INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_HeapStd_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__PARAMS__C, ".econst:xdc_runtime_HeapStd_Object__PARAMS__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_HeapStd_Params xdc_runtime_HeapStd_Object__PARAMS__C = {
    sizeof (xdc_runtime_HeapStd_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_HeapStd_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_HeapStd_Module__ xdc_runtime_HeapStd_Module__root__V = {
    {&xdc_runtime_HeapStd_Module__root__V.link,  /* link.next */
    &xdc_runtime_HeapStd_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_HeapStd_Object__ xdc_runtime_HeapStd_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_HeapStd_Module__FXNS__C,
        ((xdc_UArg)((-0x0 - 1))),  /* remainSize */
        ((xdc_UArg)((-0x0 - 1))),  /* startSize */
    },
};

/* Module__state__V */
#ifdef __ti__
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V __attribute__ ((section(".data:xdc_runtime_HeapStd_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V __attribute__ ((section(".data_xdc_runtime_HeapStd_Module__state__V")));
#endif
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V = {
    ((xdc_UArg)(0x0)),  /* remainRTSSize */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__diagsEnabled__C, ".econst:xdc_runtime_HeapStd_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsEnabled xdc_runtime_HeapStd_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__diagsIncluded__C, ".econst:xdc_runtime_HeapStd_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsIncluded xdc_runtime_HeapStd_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__diagsMask__C, ".econst:xdc_runtime_HeapStd_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsMask xdc_runtime_HeapStd_Module__diagsMask__C = ((const CT__xdc_runtime_HeapStd_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__gateObj__C, ".econst:xdc_runtime_HeapStd_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__gateObj xdc_runtime_HeapStd_Module__gateObj__C = ((const CT__xdc_runtime_HeapStd_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__gatePrms__C, ".econst:xdc_runtime_HeapStd_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__gatePrms xdc_runtime_HeapStd_Module__gatePrms__C = ((const CT__xdc_runtime_HeapStd_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__id__C, ".econst:xdc_runtime_HeapStd_Module__id__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__id xdc_runtime_HeapStd_Module__id__C = (xdc_Bits16)0xbU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerDefined__C, ".econst:xdc_runtime_HeapStd_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerDefined xdc_runtime_HeapStd_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerObj__C, ".econst:xdc_runtime_HeapStd_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerObj xdc_runtime_HeapStd_Module__loggerObj__C = ((const CT__xdc_runtime_HeapStd_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn0__C, ".econst:xdc_runtime_HeapStd_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn0 xdc_runtime_HeapStd_Module__loggerFxn0__C = ((const CT__xdc_runtime_HeapStd_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn1__C, ".econst:xdc_runtime_HeapStd_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn1 xdc_runtime_HeapStd_Module__loggerFxn1__C = ((const CT__xdc_runtime_HeapStd_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn2__C, ".econst:xdc_runtime_HeapStd_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn2 xdc_runtime_HeapStd_Module__loggerFxn2__C = ((const CT__xdc_runtime_HeapStd_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn4__C, ".econst:xdc_runtime_HeapStd_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn4 xdc_runtime_HeapStd_Module__loggerFxn4__C = ((const CT__xdc_runtime_HeapStd_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn8__C, ".econst:xdc_runtime_HeapStd_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn8 xdc_runtime_HeapStd_Module__loggerFxn8__C = ((const CT__xdc_runtime_HeapStd_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__count__C, ".econst:xdc_runtime_HeapStd_Object__count__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Object__count xdc_runtime_HeapStd_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__heap__C, ".econst:xdc_runtime_HeapStd_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Object__heap xdc_runtime_HeapStd_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__sizeof__C, ".econst:xdc_runtime_HeapStd_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Object__sizeof xdc_runtime_HeapStd_Object__sizeof__C = sizeof(xdc_runtime_HeapStd_Object__);

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__table__C, ".econst:xdc_runtime_HeapStd_Object__table__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_Object__table xdc_runtime_HeapStd_Object__table__C = xdc_runtime_HeapStd_Object__table__V;

/* E_noRTSMemory__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_E_noRTSMemory__C, ".econst:xdc_runtime_HeapStd_E_noRTSMemory__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_E_noRTSMemory__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_E_noRTSMemory__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_E_noRTSMemory__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_E_noRTSMemory xdc_runtime_HeapStd_E_noRTSMemory__C = (((xdc_runtime_Error_Id)7) << 16 | 0U);

/* A_zeroSize__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_zeroSize__C, ".econst:xdc_runtime_HeapStd_A_zeroSize__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_A_zeroSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_A_zeroSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_A_zeroSize__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_A_zeroSize xdc_runtime_HeapStd_A_zeroSize__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_align__C, ".econst:xdc_runtime_HeapStd_A_align__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_A_align__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_A_align__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_A_align__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_A_align xdc_runtime_HeapStd_A_align__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_invalidTotalFreeSize__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_invalidTotalFreeSize__C, ".econst:xdc_runtime_HeapStd_A_invalidTotalFreeSize__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_A_invalidTotalFreeSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_A_invalidTotalFreeSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_A_invalidTotalFreeSize__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_A_invalidTotalFreeSize xdc_runtime_HeapStd_A_invalidTotalFreeSize__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_invalidAlignment__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_invalidAlignment__C, ".econst:xdc_runtime_HeapStd_A_invalidAlignment__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_A_invalidAlignment__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_A_invalidAlignment__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_A_invalidAlignment__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_HeapStd_A_invalidAlignment xdc_runtime_HeapStd_A_invalidAlignment__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".econst:xdc_runtime_Log_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".econst:xdc_runtime_Log_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".econst:xdc_runtime_Log_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((const CT__xdc_runtime_Log_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".econst:xdc_runtime_Log_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((const CT__xdc_runtime_Log_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".econst:xdc_runtime_Log_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((const CT__xdc_runtime_Log_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".econst:xdc_runtime_Log_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x7U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".econst:xdc_runtime_Log_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".econst:xdc_runtime_Log_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((const CT__xdc_runtime_Log_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".econst:xdc_runtime_Log_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((const CT__xdc_runtime_Log_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".econst:xdc_runtime_Log_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((const CT__xdc_runtime_Log_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".econst:xdc_runtime_Log_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((const CT__xdc_runtime_Log_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".econst:xdc_runtime_Log_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((const CT__xdc_runtime_Log_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".econst:xdc_runtime_Log_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((const CT__xdc_runtime_Log_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".econst:xdc_runtime_Log_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".econst:xdc_runtime_Log_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".econst:xdc_runtime_Log_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".econst:xdc_runtime_Log_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = NULL;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".econst:xdc_runtime_Log_L_construct__C");
asm("	.sect \".econst:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)1) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".econst:xdc_runtime_Log_L_create__C");
asm("	.sect \".econst:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)2) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".econst:xdc_runtime_Log_L_destruct__C");
asm("	.sect \".econst:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)3) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".econst:xdc_runtime_Log_L_delete__C");
asm("	.sect \".econst:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".econst:xdc_runtime_Log_L_error__C");
asm("	.sect \".econst:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".econst:xdc_runtime_Log_L_warning__C");
asm("	.sect \".econst:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)6) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".econst:xdc_runtime_Log_L_info__C");
asm("	.sect \".econst:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)7) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".econst:xdc_runtime_Log_L_start__C");
asm("	.sect \".econst:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)8) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".econst:xdc_runtime_Log_L_stop__C");
asm("	.sect \".econst:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)9) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".econst:xdc_runtime_Log_L_startInstance__C");
asm("	.sect \".econst:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)10) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".econst:xdc_runtime_Log_L_stopInstance__C");
asm("	.sect \".econst:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)11) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerBuf INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__PARAMS__C, ".econst:xdc_runtime_LoggerBuf_Object__PARAMS__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Object__PARAMS__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_LoggerBuf_Params xdc_runtime_LoggerBuf_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerBuf_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerBuf_Object__PARAMS__C.__iprms, /* instance */
    (xdc_UInt)0x40U,  /* numEntries */
    xdc_runtime_LoggerBuf_BufType_CIRCULAR,  /* bufType */
    0,  /* exitFlush */
    0,  /* bufHeap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[15];

/* Module__root__V */
xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V = {
    {&xdc_runtime_LoggerBuf_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerBuf_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerBuf_Module__FXNS__C,
        0,  /* bufHeap */
        ((void*)xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A),  /* entryArr */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* curEntry */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[14])),  /* endEntry */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* readEntry */
        (xdc_Bits32)0x1U,  /* serial */
        (xdc_UInt16)0xfU,  /* numEntries */
        (xdc_Int8)0x0,  /* advance */
        0,  /* enabled */
        0,  /* flush */
    },
};

/* Module__state__V */
#ifdef __ti__
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data:xdc_runtime_LoggerBuf_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data_xdc_runtime_LoggerBuf_Module__state__V")));
#endif
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V = {
    (xdc_Bits16)0x0U,  /* level1 */
    (xdc_Bits16)0x0U,  /* level2 */
    (xdc_Bits16)0x0U,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsEnabled__C, ".econst:xdc_runtime_LoggerBuf_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsIncluded__C, ".econst:xdc_runtime_LoggerBuf_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsMask__C, ".econst:xdc_runtime_LoggerBuf_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C = ((const CT__xdc_runtime_LoggerBuf_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gateObj__C, ".econst:xdc_runtime_LoggerBuf_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C = ((const CT__xdc_runtime_LoggerBuf_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gatePrms__C, ".econst:xdc_runtime_LoggerBuf_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C = ((const CT__xdc_runtime_LoggerBuf_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__id__C, ".econst:xdc_runtime_LoggerBuf_Module__id__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C = (xdc_Bits16)0x8U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerDefined__C, ".econst:xdc_runtime_LoggerBuf_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerObj__C, ".econst:xdc_runtime_LoggerBuf_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn0__C, ".econst:xdc_runtime_LoggerBuf_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn1__C, ".econst:xdc_runtime_LoggerBuf_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn2__C, ".econst:xdc_runtime_LoggerBuf_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn4__C, ".econst:xdc_runtime_LoggerBuf_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn8__C, ".econst:xdc_runtime_LoggerBuf_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__count__C, ".econst:xdc_runtime_LoggerBuf_Object__count__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__heap__C, ".econst:xdc_runtime_LoggerBuf_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__sizeof__C, ".econst:xdc_runtime_LoggerBuf_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C = sizeof(xdc_runtime_LoggerBuf_Object__);

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__table__C, ".econst:xdc_runtime_LoggerBuf_Object__table__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C = xdc_runtime_LoggerBuf_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_filterByLevel__C, ".econst:xdc_runtime_LoggerBuf_filterByLevel__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_filterByLevel__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_filterByLevel__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_filterByLevel__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C = 0;

/* E_badLevel__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_E_badLevel__C, ".econst:xdc_runtime_LoggerBuf_E_badLevel__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_E_badLevel__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_E_badLevel__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_E_badLevel__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C = (((xdc_runtime_Error_Id)5) << 16 | 0U);

/* enableFlush__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_enableFlush__C, ".econst:xdc_runtime_LoggerBuf_enableFlush__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_enableFlush__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_enableFlush__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_enableFlush__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C = 0;

/* statusLogger__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_statusLogger__C, ".econst:xdc_runtime_LoggerBuf_statusLogger__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_statusLogger__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_statusLogger__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_statusLogger__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level1Mask__C, ".econst:xdc_runtime_LoggerBuf_level1Mask__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_level1Mask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_level1Mask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_level1Mask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C = (xdc_Bits16)0x0U;

/* level2Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level2Mask__C, ".econst:xdc_runtime_LoggerBuf_level2Mask__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_level2Mask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_level2Mask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_level2Mask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C = (xdc_Bits16)0x0U;

/* level3Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level3Mask__C, ".econst:xdc_runtime_LoggerBuf_level3Mask__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_level3Mask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_level3Mask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_level3Mask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C = (xdc_Bits16)0x0U;

/* level4Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level4Mask__C, ".econst:xdc_runtime_LoggerBuf_level4Mask__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_level4Mask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_level4Mask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_level4Mask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C = (xdc_Bits16)0xff87U;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".econst:xdc_runtime_Main_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x4090U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".econst:xdc_runtime_Main_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x4090U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".econst:xdc_runtime_Main_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((const CT__xdc_runtime_Main_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".econst:xdc_runtime_Main_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((const CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".econst:xdc_runtime_Main_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((const CT__xdc_runtime_Main_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".econst:xdc_runtime_Main_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x9U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".econst:xdc_runtime_Main_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".econst:xdc_runtime_Main_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((const CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".econst:xdc_runtime_Main_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((const CT__xdc_runtime_Main_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".econst:xdc_runtime_Main_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((const CT__xdc_runtime_Main_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".econst:xdc_runtime_Main_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((const CT__xdc_runtime_Main_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".econst:xdc_runtime_Main_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((const CT__xdc_runtime_Main_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".econst:xdc_runtime_Main_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((const CT__xdc_runtime_Main_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".econst:xdc_runtime_Main_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".econst:xdc_runtime_Main_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".econst:xdc_runtime_Main_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".econst:xdc_runtime_Main_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data:xdc_runtime_Memory_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x2,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".econst:xdc_runtime_Memory_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".econst:xdc_runtime_Memory_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".econst:xdc_runtime_Memory_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((const CT__xdc_runtime_Memory_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".econst:xdc_runtime_Memory_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((const CT__xdc_runtime_Memory_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".econst:xdc_runtime_Memory_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((const CT__xdc_runtime_Memory_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".econst:xdc_runtime_Memory_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0xaU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".econst:xdc_runtime_Memory_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".econst:xdc_runtime_Memory_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((const CT__xdc_runtime_Memory_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".econst:xdc_runtime_Memory_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".econst:xdc_runtime_Memory_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".econst:xdc_runtime_Memory_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".econst:xdc_runtime_Memory_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".econst:xdc_runtime_Memory_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".econst:xdc_runtime_Memory_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".econst:xdc_runtime_Memory_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".econst:xdc_runtime_Memory_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".econst:xdc_runtime_Memory_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = NULL;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".econst:xdc_runtime_Memory_defaultHeapInstance__C");
asm("	.sect \".econst:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&xdc_runtime_HeapStd_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data:xdc_runtime_Registry_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)NULL),  /* listHead */
    (xdc_Bits16)0x7fffU,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".econst:xdc_runtime_Registry_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".econst:xdc_runtime_Registry_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".econst:xdc_runtime_Registry_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((const CT__xdc_runtime_Registry_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".econst:xdc_runtime_Registry_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((const CT__xdc_runtime_Registry_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".econst:xdc_runtime_Registry_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((const CT__xdc_runtime_Registry_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".econst:xdc_runtime_Registry_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0xcU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".econst:xdc_runtime_Registry_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".econst:xdc_runtime_Registry_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((const CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".econst:xdc_runtime_Registry_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".econst:xdc_runtime_Registry_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".econst:xdc_runtime_Registry_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".econst:xdc_runtime_Registry_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".econst:xdc_runtime_Registry_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".econst:xdc_runtime_Registry_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".econst:xdc_runtime_Registry_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".econst:xdc_runtime_Registry_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".econst:xdc_runtime_Registry_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data:xdc_runtime_Startup_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)NULL),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".econst:xdc_runtime_Startup_firstFxns__A");
asm("	.sect \".econst:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");

const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))(ti_catalog_c2800_initF2837x_Boot_initStartup)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".econst:xdc_runtime_Startup_sfxnTab__A");
asm("	.sect \".econst:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");

const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10] = {
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_LoggerBuf_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_SysMin_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_c28_Hwi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_c28_Timer_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Clock_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Swi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Task_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_hal_Hwi_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_hal_Timer_Module_startup__E)),  /* [9] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".econst:xdc_runtime_Startup_sfxnRts__A");
asm("	.sect \".econst:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");

const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10] = {
    1,  /* [0] */
    1,  /* [1] */
    1,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".econst:xdc_runtime_Startup_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".econst:xdc_runtime_Startup_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".econst:xdc_runtime_Startup_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((const CT__xdc_runtime_Startup_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".econst:xdc_runtime_Startup_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((const CT__xdc_runtime_Startup_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".econst:xdc_runtime_Startup_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((const CT__xdc_runtime_Startup_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".econst:xdc_runtime_Startup_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0xdU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".econst:xdc_runtime_Startup_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".econst:xdc_runtime_Startup_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((const CT__xdc_runtime_Startup_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".econst:xdc_runtime_Startup_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".econst:xdc_runtime_Startup_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".econst:xdc_runtime_Startup_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".econst:xdc_runtime_Startup_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".econst:xdc_runtime_Startup_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".econst:xdc_runtime_Startup_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".econst:xdc_runtime_Startup_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".econst:xdc_runtime_Startup_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".econst:xdc_runtime_Startup_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = NULL;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".econst:xdc_runtime_Startup_maxPasses__C");
asm("	.sect \".econst:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".econst:xdc_runtime_Startup_firstFxns__C");
asm("	.sect \".econst:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns const  *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".econst:xdc_runtime_Startup_lastFxns__C");
asm("	.sect \".econst:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".econst:xdc_runtime_Startup_startModsFxn__C");
asm("	.sect \".econst:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((const CT__xdc_runtime_Startup_startModsFxn)(xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".econst:xdc_runtime_Startup_execImpl__C");
asm("	.sect \".econst:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((const CT__xdc_runtime_Startup_execImpl)(xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".econst:xdc_runtime_Startup_sfxnTab__C");
asm("	.sect \".econst:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((const CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".econst:xdc_runtime_Startup_sfxnRts__C");
asm("	.sect \".econst:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((const CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[170];

/* Module__state__V */
#ifdef __ti__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data:xdc_runtime_SysMin_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0U,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".econst:xdc_runtime_SysMin_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".econst:xdc_runtime_SysMin_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".econst:xdc_runtime_SysMin_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((const CT__xdc_runtime_SysMin_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".econst:xdc_runtime_SysMin_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((const CT__xdc_runtime_SysMin_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".econst:xdc_runtime_SysMin_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((const CT__xdc_runtime_SysMin_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".econst:xdc_runtime_SysMin_Module__id__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0xfU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".econst:xdc_runtime_SysMin_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".econst:xdc_runtime_SysMin_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((const CT__xdc_runtime_SysMin_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".econst:xdc_runtime_SysMin_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".econst:xdc_runtime_SysMin_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".econst:xdc_runtime_SysMin_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".econst:xdc_runtime_SysMin_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".econst:xdc_runtime_SysMin_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".econst:xdc_runtime_SysMin_Object__count__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".econst:xdc_runtime_SysMin_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".econst:xdc_runtime_SysMin_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".econst:xdc_runtime_SysMin_Object__table__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = NULL;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".econst:xdc_runtime_SysMin_bufSize__C");
asm("	.sect \".econst:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0xaa;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".econst:xdc_runtime_SysMin_flushAtExit__C");
asm("	.sect \".econst:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 0;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".econst:xdc_runtime_SysMin_outputFxn__C");
asm("	.sect \".econst:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((const CT__xdc_runtime_SysMin_outputFxn)NULL);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".econst:xdc_runtime_SysMin_outputFunc__C");
asm("	.sect \".econst:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((const CT__xdc_runtime_SysMin_outputFunc)(xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4] = {
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [1] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [2] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [3] */
};

/* Module__state__V */
#ifdef __ti__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data:xdc_runtime_System_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".econst:xdc_runtime_System_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".econst:xdc_runtime_System_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".econst:xdc_runtime_System_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((const CT__xdc_runtime_System_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".econst:xdc_runtime_System_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((const CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".econst:xdc_runtime_System_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((const CT__xdc_runtime_System_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".econst:xdc_runtime_System_Module__id__C");
asm("	.sect \".econst:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0xeU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".econst:xdc_runtime_System_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".econst:xdc_runtime_System_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((const CT__xdc_runtime_System_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".econst:xdc_runtime_System_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((const CT__xdc_runtime_System_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".econst:xdc_runtime_System_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((const CT__xdc_runtime_System_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".econst:xdc_runtime_System_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((const CT__xdc_runtime_System_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".econst:xdc_runtime_System_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((const CT__xdc_runtime_System_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".econst:xdc_runtime_System_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((const CT__xdc_runtime_System_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".econst:xdc_runtime_System_Object__count__C");
asm("	.sect \".econst:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".econst:xdc_runtime_System_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".econst:xdc_runtime_System_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".econst:xdc_runtime_System_Object__table__C");
asm("	.sect \".econst:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = NULL;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".econst:xdc_runtime_System_A_cannotFitIntoArg__C");
asm("	.sect \".econst:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".econst:xdc_runtime_System_maxAtexitHandlers__C");
asm("	.sect \".econst:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x4;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".econst:xdc_runtime_System_abortFxn__C");
asm("	.sect \".econst:xdc_runtime_System_abortFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_abortFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_abortFxn__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((const CT__xdc_runtime_System_abortFxn)(xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".econst:xdc_runtime_System_exitFxn__C");
asm("	.sect \".econst:xdc_runtime_System_exitFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_exitFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_exitFxn__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((const CT__xdc_runtime_System_exitFxn)(xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".econst:xdc_runtime_System_extendFxn__C");
asm("	.sect \".econst:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((const CT__xdc_runtime_System_extendFxn)(xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data:xdc_runtime_Text_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".econst:xdc_runtime_Text_charTab__A");
asm("	.sect \".econst:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");

const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[1] = {
    (xdc_Char)0x0,  /* [0] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".econst:xdc_runtime_Text_nodeTab__A");
asm("	.sect \".econst:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");

const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[1] = {
    {
        (xdc_Bits16)0x0U,  /* left */
        (xdc_Bits16)0x0U,  /* right */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".econst:xdc_runtime_Text_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".econst:xdc_runtime_Text_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".econst:xdc_runtime_Text_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((const CT__xdc_runtime_Text_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".econst:xdc_runtime_Text_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((const CT__xdc_runtime_Text_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".econst:xdc_runtime_Text_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((const CT__xdc_runtime_Text_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".econst:xdc_runtime_Text_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x10U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".econst:xdc_runtime_Text_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".econst:xdc_runtime_Text_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((const CT__xdc_runtime_Text_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".econst:xdc_runtime_Text_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((const CT__xdc_runtime_Text_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".econst:xdc_runtime_Text_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((const CT__xdc_runtime_Text_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".econst:xdc_runtime_Text_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((const CT__xdc_runtime_Text_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".econst:xdc_runtime_Text_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((const CT__xdc_runtime_Text_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".econst:xdc_runtime_Text_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((const CT__xdc_runtime_Text_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".econst:xdc_runtime_Text_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".econst:xdc_runtime_Text_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".econst:xdc_runtime_Text_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".econst:xdc_runtime_Text_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = NULL;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".econst:xdc_runtime_Text_nameUnknown__C");
asm("	.sect \".econst:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".econst:xdc_runtime_Text_nameEmpty__C");
asm("	.sect \".econst:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".econst:xdc_runtime_Text_nameStatic__C");
asm("	.sect \".econst:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".econst:xdc_runtime_Text_isLoaded__C");
asm("	.sect \".econst:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 0;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".econst:xdc_runtime_Text_charTab__C");
asm("	.sect \".econst:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((const CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".econst:xdc_runtime_Text_nodeTab__C");
asm("	.sect \".econst:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((const CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".econst:xdc_runtime_Text_charCnt__C");
asm("	.sect \".econst:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".econst:xdc_runtime_Text_nodeCnt__C");
asm("	.sect \".econst:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x1;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".econst:xdc_runtime_Text_unnamedModsLastId__C");
asm("	.sect \".econst:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000U;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".econst:xdc_runtime_Text_registryModsLastId__C");
asm("	.sect \".econst:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fffU;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".econst:xdc_runtime_Text_visitRopeFxn__C");
asm("	.sect \".econst:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((const CT__xdc_runtime_Text_visitRopeFxn)(xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".econst:xdc_runtime_Text_visitRopeFxn2__C");
asm("	.sect \".econst:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");

__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((const CT__xdc_runtime_Text_visitRopeFxn2)(xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_printf_va__F(fmt, arg__va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_printf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_aprintf_va__F(fmt, arg__va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_aprintf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);

    va_end(arg__va);
    return retval;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c28.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c28_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_c28_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_c28_Hwi_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_c28_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_c28_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_c28_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_c28_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_c28_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_c28_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_c28_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_c28_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_c28_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_c28_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_c28_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_c28_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c28_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c28_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_c28_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_c28_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_c28_Hwi_getFunc((ti_sysbios_family_c28_Hwi_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_c28_Hwi_setFunc((ti_sysbios_family_c28_Hwi_Handle)inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id )
{
    return ti_sysbios_family_c28_Hwi_getHookContext((ti_sysbios_family_c28_Hwi_Handle)inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_c28_Hwi_setHookContext((ti_sysbios_family_c28_Hwi_Handle)inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst )
{
    return ti_sysbios_family_c28_Hwi_getIrp((ti_sysbios_family_c28_Hwi_Handle)inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c28.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c28_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Timer_TimerProxy_Handle ti_sysbios_hal_Timer_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Timer_TimerProxy_Handle)ti_sysbios_family_c28_Timer_create(id, tickFxn, (const ti_sysbios_family_c28_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Timer_TimerProxy_delete(ti_sysbios_hal_Timer_TimerProxy_Handle *instp)
{
    ti_sysbios_family_c28_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_c28_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_c28_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_c28_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_c28_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_c28_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    return ti_sysbios_family_c28_Timer_getMaxTicks((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_c28_Timer_setNextTick((ti_sysbios_family_c28_Timer_Handle)inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    ti_sysbios_family_c28_Timer_start((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    ti_sysbios_family_c28_Timer_stop((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 period )
{
    ti_sysbios_family_c28_Timer_setPeriod((ti_sysbios_family_c28_Timer_Handle)inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_c28_Timer_setPeriodMicroSecs((ti_sysbios_family_c28_Timer_Handle)inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    return ti_sysbios_family_c28_Timer_getPeriod((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    return ti_sysbios_family_c28_Timer_getCount((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_c28_Timer_getFreq((ti_sysbios_family_c28_Timer_Handle)inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_c28_Timer_getFunc((ti_sysbios_family_c28_Timer_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_c28_Timer_setFunc((ti_sysbios_family_c28_Timer_Handle)inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_c28_Timer_trigger((ti_sysbios_family_c28_Timer_Handle)inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    return ti_sysbios_family_c28_Timer_getExpiredCounts((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_c28_Timer_getExpiredTicks((ti_sysbios_family_c28_Timer_Handle)inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCurrentTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_Bool save )
{
    return ti_sysbios_family_c28_Timer_getCurrentTick((ti_sysbios_family_c28_Timer_Handle)inst, save);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c28.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c28_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_family_c28_Timer_create(id, tickFxn, (const ti_sysbios_family_c28_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_family_c28_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_c28_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_c28_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_c28_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_c28_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_c28_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_c28_Timer_getMaxTicks((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_c28_Timer_setNextTick((ti_sysbios_family_c28_Timer_Handle)inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_c28_Timer_start((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_c28_Timer_stop((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 period )
{
    ti_sysbios_family_c28_Timer_setPeriod((ti_sysbios_family_c28_Timer_Handle)inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_c28_Timer_setPeriodMicroSecs((ti_sysbios_family_c28_Timer_Handle)inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_c28_Timer_getPeriod((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_c28_Timer_getCount((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_c28_Timer_getFreq((ti_sysbios_family_c28_Timer_Handle)inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_c28_Timer_getFunc((ti_sysbios_family_c28_Timer_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_c28_Timer_setFunc((ti_sysbios_family_c28_Timer_Handle)inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_c28_Timer_trigger((ti_sysbios_family_c28_Timer_Handle)inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_c28_Timer_getExpiredCounts((ti_sysbios_family_c28_Timer_Handle)inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_c28_Timer_getExpiredTicks((ti_sysbios_family_c28_Timer_Handle)inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_Bool save )
{
    return ti_sysbios_family_c28_Timer_getCurrentTick((ti_sysbios_family_c28_Timer_Handle)inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c28.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_c28_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c28.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c28_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enterFxn, ti_sysbios_interfaces_ITaskSupport_FuncPtr exitFxn, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_c28_TaskSupport_start(curTask, enterFxn, exitFxn, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_c28_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_c28_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_c28_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_c28_TaskSupport_getStackAlignment();
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_LoggerBuf_Module_GateProxy_Handle xdc_runtime_LoggerBuf_Module_GateProxy_create( const xdc_runtime_LoggerBuf_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_LoggerBuf_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_LoggerBuf_Module_GateProxy_delete(xdc_runtime_LoggerBuf_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_LoggerBuf_Module_GateProxy_enter__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_LoggerBuf_Module_GateProxy_leave__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c28.f2837x.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c28_f2837x_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_LoggerBuf_TimestampProxy_get32__E( void )
{
    return ti_sysbios_family_c28_f2837x_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_c28_f2837x_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_c28_f2837x_TimestampProvider_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.HeapStd */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S(void)
{
    return xdc_runtime_HeapStd_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)xdc_runtime_HeapStd_create((const xdc_runtime_HeapStd_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    xdc_runtime_HeapStd_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_HeapStd_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return xdc_runtime_HeapStd_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S(void)
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.c28.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_c28_Hwi_Object2__ s0; char c; } ti_sysbios_family_c28_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__DESC__C, ".econst:ti_sysbios_family_c28_Hwi_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c28_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_c28_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_c28_Hwi___S1) - sizeof(ti_sysbios_family_c28_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_c28_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_c28_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_c28_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.c28.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_c28_Timer_Object2__ s0; char c; } ti_sysbios_family_c28_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__DESC__C, ".econst:ti_sysbios_family_c28_Timer_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c28_Timer_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_c28_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_c28_Timer___S1) - sizeof(ti_sysbios_family_c28_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_c28_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_c28_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_c28_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".econst:ti_sysbios_gates_GateHwi_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".econst:ti_sysbios_gates_GateMutex_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".econst:ti_sysbios_hal_Hwi_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".econst:ti_sysbios_hal_Timer_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".econst:ti_sysbios_knl_Clock_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".econst:ti_sysbios_knl_Queue_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".econst:ti_sysbios_knl_Semaphore_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".econst:ti_sysbios_knl_Swi_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".econst:ti_sysbios_knl_Task_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.HeapStd OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_HeapStd_Object2__ s0; char c; } xdc_runtime_HeapStd___S1;
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__DESC__C, ".econst:xdc_runtime_HeapStd_Object__DESC__C");
asm("	.sect \".econst:xdc_runtime_HeapStd_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_HeapStd_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_HeapStd_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_HeapStd_Object__DESC__C = {
    (xdc_CPtr)&xdc_runtime_HeapStd_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_HeapStd_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_HeapStd___S1) - sizeof(xdc_runtime_HeapStd_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_HeapStd_Object2__), /* objSize */
    (xdc_CPtr)&xdc_runtime_HeapStd_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_HeapStd_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.LoggerBuf OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerBuf_Object2__ s0; char c; } xdc_runtime_LoggerBuf___S1;
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__DESC__C, ".econst:xdc_runtime_LoggerBuf_Object__DESC__C");
asm("	.sect \".econst:xdc_runtime_LoggerBuf_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_LoggerBuf_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_LoggerBuf_Object__DESC__C\"");
asm("	.clink ");

__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C = {
    (xdc_CPtr)&xdc_runtime_LoggerBuf_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerBuf_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerBuf___S1) - sizeof(xdc_runtime_LoggerBuf_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerBuf_Object2__), /* objSize */
    (xdc_CPtr)&xdc_runtime_LoggerBuf_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerBuf_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module mod, const xdc_runtime_IFilterLogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IFilterLogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IFilterLogger_Params), eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module mod, const xdc_runtime_ILogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_ILogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_ILogger_Params), eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.c28.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c28_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c28_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c28_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c28_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c28_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c28_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c28_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c28_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c28_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c28_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c28_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c28_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_c28_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_c28_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 23;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_c28_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_c28_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_c28_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_c28_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_c28_Hwi_Object__ * const)ti_sysbios_family_c28_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_c28_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_c28_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_c28_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_c28_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_c28_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_c28_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_c28_Hwi_Args__create *__args = req_args;
    ti_sysbios_family_c28_Hwi_Params instPrms;
    ti_sysbios_family_c28_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_c28_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_c28_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_c28_Hwi_Handle ti_sysbios_family_c28_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_c28_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_c28_Hwi_Params prms;
    ti_sysbios_family_c28_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_c28_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c28_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_c28_Hwi_construct(ti_sysbios_family_c28_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_c28_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_c28_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_c28_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_c28_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_c28_Hwi_destruct(ti_sysbios_family_c28_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c28_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_c28_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, *((ti_sysbios_family_c28_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_c28_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_c28_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_c28_Hwi_delete(ti_sysbios_family_c28_Hwi_Handle *instp)
{
    ti_sysbios_family_c28_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.c28.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c28.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c28_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c28.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c28_Timer_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c28_Timer_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c28_Timer_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c28_Timer_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c28_Timer_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c28_Timer_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c28_Timer_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c28_Timer_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c28_Timer_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c28_Timer_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c28_Timer_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c28_Timer_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c28_Timer_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c28_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c28_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c28_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c28_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c28_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c28_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_c28_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_c28_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 24;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_c28_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_c28_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_c28_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_c28_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_c28_Timer_Object__ * const)ti_sysbios_family_c28_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_c28_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_c28_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_c28_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_c28_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_c28_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_c28_Timer_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_c28_Timer_Args__create *__args = req_args;
    ti_sysbios_family_c28_Timer_Params instPrms;
    ti_sysbios_family_c28_Timer_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_c28_Timer_Instance_init__E(objp, __args->id, __args->tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_c28_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_c28_Timer_Handle ti_sysbios_family_c28_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_c28_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_c28_Timer_Params prms;
    ti_sysbios_family_c28_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_c28_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c28_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_c28_Timer_construct(ti_sysbios_family_c28_Timer_Struct *objp, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_c28_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_c28_Timer_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_c28_Timer_Instance_init__E((xdc_Ptr)objp, id, tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_c28_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_c28_Timer_destruct(ti_sysbios_family_c28_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c28_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_c28_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, *((ti_sysbios_family_c28_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_c28_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_c28_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_c28_Timer_delete(ti_sysbios_family_c28_Timer_Handle *instp)
{
    ti_sysbios_family_c28_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.c28.f2837x.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c28_f2837x_TimestampProvider_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 43;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params instPrms;
    ti_sysbios_gates_GateHwi_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *objp, const ti_sysbios_gates_GateHwi_Params *paramsPtr)
{
    ti_sysbios_gates_GateHwi_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 44;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params instPrms;
    ti_sysbios_gates_GateMutex_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *objp, const ti_sysbios_gates_GateMutex_Params *paramsPtr)
{
    ti_sysbios_gates_GateMutex_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 39;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_hal_Hwi_Object__ * const)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = req_args;
    ti_sysbios_hal_Hwi_Params instPrms;
    ti_sysbios_hal_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 40;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_hal_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_hal_Timer_Object__ * const)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Timer_Args__create *__args = req_args;
    ti_sysbios_hal_Timer_Params instPrms;
    ti_sysbios_hal_Timer_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(objp, __args->id, __args->tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_hal_Timer_Handle ti_sysbios_hal_Timer_create( xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Timer_construct(ti_sysbios_hal_Timer_Struct *objp, xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Timer_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E((xdc_Ptr)objp, id, tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Timer_destruct(ti_sysbios_hal_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Timer_delete(ti_sysbios_hal_Timer_Handle *instp)
{
    ti_sysbios_hal_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 29;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = req_args;
    ti_sysbios_knl_Clock_Params instPrms;
    ti_sysbios_knl_Clock_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(objp, __args->clockFxn, __args->timeout, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(obj, clockFxn, timeout, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *objp, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr)
{
    ti_sysbios_knl_Clock_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)objp, clockFxn, timeout, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params instPrms;
    ti_sysbios_knl_Queue_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *objp, const ti_sysbios_knl_Queue_Params *paramsPtr)
{
    ti_sysbios_knl_Queue_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 33;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = req_args;
    ti_sysbios_knl_Semaphore_Params instPrms;
    ti_sysbios_knl_Semaphore_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(objp, __args->count, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(obj, count, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *objp, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr)
{
    ti_sysbios_knl_Semaphore_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)objp, count, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 34;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = req_args;
    ti_sysbios_knl_Swi_Params instPrms;
    ti_sysbios_knl_Swi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(objp, __args->swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(obj, swiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *objp, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)objp, swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 35;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Task_Object__ * const)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = req_args;
    ti_sysbios_knl_Task_Params instPrms;
    ti_sysbios_knl_Task_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(objp, __args->fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(obj, fxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *objp, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)objp, fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.HeapStd SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_HeapStd_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_HeapStd_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_HeapStd_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_HeapStd_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_HeapStd_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_HeapStd_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_HeapStd_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_HeapStd_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_HeapStd_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_HeapStd_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_HeapStd_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_HeapStd_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_HeapStd_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_HeapStd_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_HeapStd_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_HeapStd_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_HeapStd_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_HeapStd_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_HeapStd_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_HeapStd_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 11;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_HeapStd_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &xdc_runtime_HeapStd_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_HeapStd_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((xdc_runtime_HeapStd_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((xdc_runtime_HeapStd_Object__ * const)xdc_runtime_HeapStd_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_HeapStd_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_HeapStd_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_HeapStd_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_HeapStd_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_HeapStd_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_HeapStd_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    xdc_runtime_HeapStd_Params instPrms;
    xdc_runtime_HeapStd_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&xdc_runtime_HeapStd_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = xdc_runtime_HeapStd_Instance_init__E(objp, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, objp, NULL, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
xdc_runtime_HeapStd_Handle xdc_runtime_HeapStd_create( const xdc_runtime_HeapStd_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    xdc_runtime_HeapStd_Params prms;
    xdc_runtime_HeapStd_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_HeapStd_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_HeapStd_Instance_init__E(obj, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, obj, NULL, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void xdc_runtime_HeapStd_construct(xdc_runtime_HeapStd_Struct *objp, const xdc_runtime_HeapStd_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    xdc_runtime_HeapStd_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&xdc_runtime_HeapStd_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = xdc_runtime_HeapStd_Instance_init__E((xdc_Ptr)objp, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, objp, NULL, iStat, 1);
    }

}

/* destruct */
void xdc_runtime_HeapStd_destruct(xdc_runtime_HeapStd_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, obj, NULL, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_HeapStd_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, *((xdc_runtime_HeapStd_Object**)instp), NULL, 0, FALSE);
    *((xdc_runtime_HeapStd_Handle*)instp) = NULL;
}

/* delete */
void xdc_runtime_HeapStd_delete(xdc_runtime_HeapStd_Handle *instp)
{
    xdc_runtime_HeapStd_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerBuf SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__S( void )
{
    return xdc_runtime_LoggerBuf_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 8;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerBuf_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &xdc_runtime_LoggerBuf_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((xdc_runtime_LoggerBuf_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((xdc_runtime_LoggerBuf_Object__ * const)xdc_runtime_LoggerBuf_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerBuf_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params instPrms;
    xdc_runtime_LoggerBuf_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(objp, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
xdc_runtime_LoggerBuf_Handle xdc_runtime_LoggerBuf_create( const xdc_runtime_LoggerBuf_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params prms;
    xdc_runtime_LoggerBuf_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(obj, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void xdc_runtime_LoggerBuf_construct(xdc_runtime_LoggerBuf_Struct *objp, const xdc_runtime_LoggerBuf_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E((xdc_Ptr)objp, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void xdc_runtime_LoggerBuf_destruct(xdc_runtime_LoggerBuf_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerBuf_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, *((xdc_runtime_LoggerBuf_Object**)instp), (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, FALSE);
    *((xdc_runtime_LoggerBuf_Handle*)instp) = NULL;
}

/* delete */
void xdc_runtime_LoggerBuf_delete(xdc_runtime_LoggerBuf_Handle *instp)
{
    xdc_runtime_LoggerBuf_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_LoggerBuf_TimestampProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S(void)
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_HeapStd_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

#include <stdint.h>
extern int_least32_t __xdc__init(void);
    __attribute__ ((used))
__FAR__ int_least32_t (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

    __attribute__ ((used))
const ti_sysbios_family_c28_Timer_Handle myTimer0 = (ti_sysbios_family_c28_Timer_Handle)((ti_sysbios_family_c28_Timer_Handle)&ti_sysbios_family_c28_Timer_Object__table__V[0]);

    __attribute__ ((used))
const ti_sysbios_hal_Hwi_Handle hwi0 = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0]);

    __attribute__ ((used))
const ti_sysbios_hal_Timer_Handle myTimer1 = (ti_sysbios_hal_Timer_Handle)((ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0]);

