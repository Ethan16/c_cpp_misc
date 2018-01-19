#include <stdio.h>

int main(int argc,char *argv[])
{
	long nc=0;
	while ((nc=getchar())!=EOF)
	{
		++nc;
		//printf("nc=%ld \n",nc);
	}
	
	printf("char count is : %ld \n",nc);
	
	system("pause");
	
	return 0;
}
