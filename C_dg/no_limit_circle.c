#include <stdio.h> 

int main()
{
	int times=0;
	
	for (;;)
	{
		times++;
		printf("This circle will forever!This is the %d times.\n",times );
		printf("Variable times address is : %p .\n",&times );
	}
	
	return 0;
}