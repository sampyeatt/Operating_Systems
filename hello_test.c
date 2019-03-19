#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <sys/syscall.h>

#define sys_helloworld 333

int main(int argc, char *argv[])
{	
	long ans = syscall(sys_helloworld);
	printf("System call returned \n ");
	return ans;
}

