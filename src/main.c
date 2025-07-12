#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include "myfunction.h"

#define THREAD_DELAY(x) k_msleep(x)

int main(void)
{
	int a = 3, b = 4;
	while(1)
	{
		printk("The sum of %d and %d is %d\n", a, b, sum(a,b));
		THREAD_DELAY(1000);
	}
}
