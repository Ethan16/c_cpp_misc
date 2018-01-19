#include <stdio.h> 
#include <time.h>

void getSeconds(unsigned long *par);

int main()
{
	unsigned long sec;
	
	getSeconds(&sec);
	
	//
	printf("Number of seconds is : %ld .\n",sec);
	
	return 0;
}

void getSeconds(unsigned long *par)
{
	*par=time(NULL);
	return;//明明返回了*par，为何函数还定义为void类型？ 
}