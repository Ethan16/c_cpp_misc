#include <stdio.h>

int max(int x,int y)
{
	return x > y ? x:y;
}

void main()
{
	//p is fun pointer.
	int (*p)(int,int)=&max;
	int a,b,c,d;
	
	printf("Pls input 3 digs : \n");
	scanf("%d %d %d",&a,&b,&c);
	
	//jing miao a !!!
	d=p(p(a,b),c);
	
	printf("The max digit is : %d .\n",d);
	
	return 0;
}