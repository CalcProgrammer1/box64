#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

//clockid_t is uint32?
// pid_t is uint32 too? (for clock_getcpuclockid)
// time_t is uint32?
// mqd_t is int

GO(aio_cancel, iFip)
// aio_cancel64
GO(aio_error, iFp)
GO(aio_error64, iFp)
GO(aio_fsync, iFip)
GO(aio_fsync64, iFip)
GO(aio_init, vFp)
GO(aio_read, iFp)
GO(aio_read64, iFp)
GO(aio_return, lFp)
GO(aio_return64, lFp)
GO(aio_suspend, iFpip)
GO(aio_suspend64, iFpip)
GO(aio_write, iFp)
GO(aio_write64, iFp)
GO(clock_getcpuclockid, iFup)
GO(clock_getres, iFup)
GO(clock_gettime, iFup)
GO(clock_nanosleep, iFuipp)
GO(clock_settime, iFup)
GO(lio_listio, iFippip)
// lio_listio64
GO(mq_close, iFi)
GO(mq_getattr, iFip)
GO(mq_notify, iFip)
GO(mq_open, iFpOM)
GO(__mq_open_2, iFpO)
GO(mq_receive, lFipLp)
GO(mq_send, iFipLu)
GO(mq_setattr, iFipp)
GO(mq_timedreceive, lFipLpp)
GO(mq_timedsend, iFipLup)
GO(mq_unlink, iFp)
GO(shm_open, iFpiu)
GO(shm_unlink, iFp)
GOM(timer_create, iFEupp)
GO(timer_delete, iFu)
GO(timer_getoverrun, iFu)
GO(timer_gettime, iFup)
GO(timer_settime, iFuipp)
