extern void prim_time(PRIM_PROTOTYPE);
extern void prim_date(PRIM_PROTOTYPE);
extern void prim_gmtoffset(PRIM_PROTOTYPE);
extern void prim_systime(PRIM_PROTOTYPE);
extern void prim_timesplit(PRIM_PROTOTYPE);
extern void prim_timefmt(PRIM_PROTOTYPE);
extern void prim_queue(PRIM_PROTOTYPE);
extern void prim_kill(PRIM_PROTOTYPE);
extern void prim_timestamps(PRIM_PROTOTYPE);
extern void prim_fork(PRIM_PROTOTYPE);
extern void prim_pid(PRIM_PROTOTYPE);
extern void prim_stats(PRIM_PROTOTYPE);
extern void prim_abort(PRIM_PROTOTYPE);
extern void prim_ispidp(PRIM_PROTOTYPE);
extern void prim_parselock(PRIM_PROTOTYPE);
extern void prim_unparselock(PRIM_PROTOTYPE);
extern void prim_prettylock(PRIM_PROTOTYPE);
extern void prim_testlock(PRIM_PROTOTYPE);
extern void prim_cancallp(PRIM_PROTOTYPE);
extern void prim_timer_start(PRIM_PROTOTYPE);
extern void prim_timer_stop(PRIM_PROTOTYPE);
extern void prim_event_count(PRIM_PROTOTYPE);
extern void prim_event_exists(PRIM_PROTOTYPE);
extern void prim_event_send(PRIM_PROTOTYPE);
extern void prim_pnameokp(PRIM_PROTOTYPE);
extern void prim_nameokp(PRIM_PROTOTYPE);
extern void prim_watchpid(PRIM_PROTOTYPE);
extern void prim_getpids(PRIM_PROTOTYPE);
extern void prim_getpidinfo(PRIM_PROTOTYPE);
extern void prim_read_wants_blanks(PRIM_PROTOTYPE);

/* From p_html.c */
extern void prim_commandtext(PRIM_PROTOTYPE);
extern void prim_stopmidi(PRIM_PROTOTYPE);
extern void prim_playmidi(PRIM_PROTOTYPE);

#define PRIMS_MISC_FUNCS prim_time, prim_date, prim_gmtoffset,           \
    prim_systime, prim_timesplit, prim_timefmt, prim_queue, prim_kill,   \
    prim_timestamps, prim_fork, prim_pid, prim_stats,        \
    prim_abort, prim_ispidp, prim_parselock, prim_unparselock,           \
    prim_prettylock, prim_testlock,        \
    prim_commandtext, prim_playmidi, prim_stopmidi,                      \
    prim_cancallp, prim_timer_start, prim_timer_stop,   \
    prim_event_count, prim_event_send,                                   \
    prim_pnameokp, prim_nameokp, prim_event_exists,    \
    prim_watchpid, prim_getpids, prim_getpidinfo, prim_read_wants_blanks\

#define PRIMS_MISC_NAMES "TIME", "DATE", "GMTOFFSET",    \
    "SYSTIME", "TIMESPLIT", "TIMEFMT", "QUEUE", "KILL",  \
    "TIMESTAMPS", "FORK", "PID", "STATS",       \
    "ABORT", "ISPID?", "PARSELOCK", "UNPARSELOCK",       \
    "PRETTYLOCK", "TESTLOCK",   \
    "COMMANDTEXT", "PLAYMIDI", "STOPMIDI",               \
    "CANCALL?", "TIMER_START",             \
    "TIMER_STOP", "EVENT_COUNT", "EVENT_SEND",           \
    "PNAME-OK?", "NAME-OK?",  \
    "EVENT_EXISTS", "WATCHPID",           \
    "GETPIDS", "GETPIDINFO", "READ_WANTS_BLANKS"   \

#define PRIMS_MISC_CNT 35 

