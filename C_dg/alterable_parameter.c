#include <stdio.h>
#include <stdarg.h>

double average(int num,...)
{
	va_list valist;
	double sum=0;
	int i;
	
	/*init*/
	va_start(valist,num);
	
	/**/
	for (i=0;i<num;++i)
	{
		sum+=va_arg(valist,int);
	}
	
	/*call resource.*/
	va_end(valist);
	
	return sum/num;
}

int main()
{
	printf("Average of 2,3,4,5,6 = %f .\n",average(2,3,4,5,6));
	printf("Average of 34,45,33333,56,78,99 = %f .\n",average(34,45,33333,56,78,99));
	
	system("pause");
	
	return 0;
	
	//system(pause);
}
