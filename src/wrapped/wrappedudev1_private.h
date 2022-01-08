#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

GO(udev_device_ref, pFp)
GO(udev_device_unref, pFp)
GO(udev_device_get_udev, pFp)
GO(udev_device_new_from_syspath, pFpp)
GO(udev_device_new_from_devnum, pFpCu)
GO(udev_device_new_from_subsystem_sysname, pFppp)
GO(udev_device_new_from_environment, pFp)
GO(udev_device_get_parent, pFp)
GO(udev_device_get_parent_with_subsystem_devtype, pFppp)
GO(udev_device_get_devpath, pFp)
GO(udev_device_get_subsystem, pFp)
GO(udev_device_get_devtype, pFp)
GO(udev_device_get_syspath, pFp)
GO(udev_device_get_sysname, pFp)
GO(udev_device_get_sysnum, pFp)
GO(udev_device_get_devnode, pFp)
GO(udev_device_get_is_initialized, iFp)
GO(udev_device_get_devlinks_list_entry, pFp)
GO(udev_device_get_properties_list_entry, pFp)
GO(udev_device_get_tags_list_entry, pFp)
GO(udev_device_get_property_value, pFpp)
GO(udev_device_get_driver, pFp)
GO(udev_device_get_devnum, uFp)
GO(udev_device_get_action, pFp)
GO(udev_device_get_sysattr_value, pFpp)
GO(udev_device_get_sysattr_list_entry, pFp)
GO(udev_device_get_seqnum, UFp)
GO(udev_device_get_usec_since_initialized, UFp)
GO(udev_device_has_tag, iFpp)
GO(udev_enumerate_ref, pFp)
GO(udev_enumerate_unref, pFp)
GO(udev_enumerate_get_udev, pFp)
GO(udev_enumerate_new, pFp)
GO(udev_enumerate_add_match_subsystem, iFpp)
GO(udev_enumerate_add_nomatch_subsystem, iFpp)
GO(udev_enumerate_add_match_sysattr, iFppp)
GO(udev_enumerate_add_nomatch_sysattr, iFppp)
GO(udev_enumerate_add_match_property, iFppp)
GO(udev_enumerate_add_match_tag, iFpp)
GO(udev_enumerate_add_match_parent, iFpp)
GO(udev_enumerate_add_match_is_initialized, iFp)
GO(udev_enumerate_add_match_sysname, iFpp)
GO(udev_enumerate_add_syspath, iFpp)
GO(udev_enumerate_scan_devices, iFp)
GO(udev_enumerate_scan_subsystems, iFp)
GO(udev_enumerate_get_list_entry, pFp)
GO(udev_list_entry_get_next, pFp)
GO(udev_list_entry_get_by_name, pFpp)
GO(udev_list_entry_get_name, pFp)
GO(udev_list_entry_get_value, pFp)
GO(udev_monitor_ref, pFp)
GO(udev_monitor_unref, pFp)
GO(udev_monitor_get_udev, pFp)
GO(udev_monitor_new_from_netlink, pFpp)
GO(udev_monitor_new_from_socket, pFpp)
GO(udev_monitor_enable_receiving, iFp)
GO(udev_monitor_set_receive_buffer_size, iFpi)
GO(udev_monitor_get_fd, iFp)
GO(udev_monitor_receive_device, pFp)
GO(udev_monitor_filter_add_match_subsystem_devtype, iFppp)
GO(udev_monitor_filter_add_match_tag, iFpp)
GO(udev_monitor_filter_update, iFp)
GO(udev_monitor_filter_remove, iFp)
GO(udev_new, pFv)
GO(udev_ref, pFp)
GO(udev_unref, pFp)
GO(udev_queue_ref, pFp)
GO(udev_queue_unref, vFp)
GO(udev_queue_get_udev, pFp)
GO(udev_queue_new, pFp)
GO(udev_queue_get_kernel_seqnum, UFp)
GO(udev_queue_get_udev_seqnum, UFp)
GO(udev_queue_get_udev_is_active, iFp)
GO(udev_queue_get_queue_is_empty, iFp)
GO(udev_queue_get_seqnum_is_finished, iFpU)
GO(udev_queue_get_seqnum_sequence_is_finished, iFpUU)
GO(udev_queue_get_queued_list_entry, pFp)
GO(udev_queue_get_failed_list_entry, pFp)
GOM(udev_set_log_fn, vFEpp)
GO(udev_get_log_priority, iFp)
GO(udev_set_log_priority, vFpi)
GO(udev_get_userdata, pFp)
GO(udev_set_userdata, vFpp)
GO(udev_device_new_from_device_id, pFpp)
GO(udev_device_set_sysattr_value, iFppp)
GO(udev_queue_get_fd, iFp)
GO(udev_queue_flush, iFp)
GO(udev_hwdb_ref, pFp)
GO(udev_hwdb_unref, pFp)
GO(udev_hwdb_new, pFp)
GO(udev_hwdb_get_properties_list_entry, pFppu)
GO(udev_util_encode_string, iFppL)