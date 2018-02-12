#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[100],*descripiton;
	
	strcpy(name,"Anna Gao");
	
	descripiton=malloc(30*sizeof(char));
	
	if (descripiton==NULL)
	{
		fprintf(stderr,"Error - unable to allocate required memory. \n");
	}
	else
	{
		strcpy(descripiton,"Anna Gao is amazing.\n");
	}
	
	//reallocate memory.
	descripiton=realloc(descripiton,100*sizeof(char));
	
	if (descripiton==NULL)
	{
		fprintf(stderr,"Error - unable to allocate required memory.\n");
	}
	else
	{
		strcat(descripiton,"She is in xinrui electric.\n");
	}
	
	printf("Name is : %s .\n",name);
	printf("Description is : %s .\n",descripiton);
	
	//free memory.
	free(descripiton);
	
	system("pause");
	
	return 0;
}
