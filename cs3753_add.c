#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/uaccess.h>

asmlinkage long sys_cs3753_add(long a, long b, long *p)
{
	long dab;
	dab = a + b;
	
	copy_to_user(p, &dab, sizeof(dab));	

	printk(KERN_ALERT "Adding %ld and %ld \n ", a, b);
	//printk(KERN_INFO "Results: %d.", dab);
	
	return 0;
}
