#include <stdio.h>

double getAverage(int *arr,int size);

int main()
{
	int balance[5]={
		23,7,12,5,9
	};
	double avg;
	
	avg=getAverage(balance,5);
	
	printf("Average value is : %f .\n",avg);
	
	return 0;
	
}

double getAverage(int *arr,int size)
{
	int i,sum=0;
	double avg;
	
	for (i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	
	avg=(double)sum/size;
	
	return avg;
}