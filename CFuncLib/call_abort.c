#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	printf("Call abort()! \n");
	
	printf("printf address is %p",&printf);
	
	abort();
	
	return 0;
}
