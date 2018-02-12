#include <stdio.h>

int main(int argc,char *argv[])
{
	int number;
	
	printf("Pls input a integer number:\n");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("You input number %d is even number.",number);
	}
	else if(number%2==1)
	{
		printf("You input number %d is odd number.\n");
	}
	else
	{
		printf("Error - you input number is wrong.\n");
	}
	
	system("pause");
	
	return 0;
}
