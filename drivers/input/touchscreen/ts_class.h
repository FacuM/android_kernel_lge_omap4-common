#ifndef __LINUX_VERSION_H_INCLUDED
#define __LINUX_VERSION_H_INCLUDED

#include <linux/list.h>
#include <linux/device.h>

struct device;
struct ts_info_classdev {
	const char		*name;
	int			 version;
	int			 flags;
	struct device		*dev;
	struct list_head	 node;
};

extern int ts_info_classdev_register(struct device *parent,
				 struct ts_info_classdev *ts_info_cdev);
extern void ts_info_classdev_unregister(struct ts_info_classdev *ts_info_cdev);

#endif
