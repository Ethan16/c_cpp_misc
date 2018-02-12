#include <stdio.h>

int main()
{
	int num;
	
	printf("Pls input a int number : ");
	scanf("%d",&num);
	
	(num%2==0)?printf("Even Number!\n"):printf("Odd number!\n");
	
	return 0;
}