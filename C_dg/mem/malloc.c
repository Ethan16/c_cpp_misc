#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[100];
	char *description;
	
	strcpy(name,"Anna Gao");
	
	//∑÷≈‰ƒ⁄¥Ê 
	description=malloc(200*sizeof(char));
	
	if (description==NULL)
	{
		fprintf(stderr,"Error - Unable to allocate required memory.\n");
	}
	else
	{
		strcpy(description,"Anna Gao is amazing in sz.\n");
		printf("Address of description is : %p \n",description);
	}
	
	printf("Name=%s \n",name);
	printf("Description : %s \n",description);
	
	free(description);
	
	printf("I have free the memory which description malloc . \n");
	printf("After free.Address of description is : %p .\n",description);
	
	system("pause");
	
	return 0;
}
