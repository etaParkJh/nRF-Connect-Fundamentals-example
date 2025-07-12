#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#define THREAD_DELAY(x) k_msleep(x)
int main(void)
{
	while (1) 
	{
		printk("Hello World!\n");
		THREAD_DELAY(1000);
	}
}