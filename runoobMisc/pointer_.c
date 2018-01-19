#include <stdio.h>

void swap(int *x,int *y);

int main()
{
	//
	int a=100,b=200;
	
	printf("before switch,a value is : %d .\n",a);
	printf("before switch,b value is : %d .\n",b);
	
	/*switch*/
	swap(&a,&b);
	printf("after switch,a value is : %d .\n",a);
	printf("after switch,b value is : %d .\n",b);
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
	return;
}