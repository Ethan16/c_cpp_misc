#include <stdio.h>

int main()
{
	double balance[5]={23.7,45.5,77777.01,99.99,2.0},*p;
	int i;
	
	p=balance;
	
	//output every element in array.
	printf("ʹ��ָ�������ֵ: \n");
	for (i=0;i<5;i++)
	{
		printf("*(p + %d) : %f .\n",i,*(p+i));
	}
	
	printf("ʹ��balance������ֵ: \n");
	for (i=0;i<5;i++)
	{
		printf("*(balance + %d) : %f \n",i,*(balance+i));
	}
	
	return 0;
}