#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <sys/syscall.h>

#define sys_cs3753_add 334

int main()
{
	long ans;
	long a,b, dab;
	a=14;
	b=36;
	//scanf("%ld", &a);
	//scanf("%ld", &b);
	
	ans = syscall(sys_cs3753_add, a,b, &dab);
	
	printf("System call returned %ld\n ", dab);
	//printf("Answer = %d \n", dab);
	return 0;
}
