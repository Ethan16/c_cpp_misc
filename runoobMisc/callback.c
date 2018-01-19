#include <stdio.h>
#include <stdlib.h>

//callback fun.
void populate_array(int *array,size_t arraySize,int (*getNextValue)(void))
{
	size_t i;
	for (i=0;i<arraySize;++i)
	{
		array[i]=getNextValue();
	}
	
	return;
}

int getNextValue(void)
{
	return rand();
}

int main()
{
	int myArray[10],i;
	
	populate_array(myArray,10,getNextValue);
	
	for (i=0;i<10;++i)
	{
		printf("myArray[%d] = %d .\n",i,myArray[i]);
	}
	
	return 0;
}
