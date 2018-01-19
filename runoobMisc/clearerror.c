#include <stdio.h>

int main(int argc,char *argv[])
{
	FILE *fp;
	char c;
	
	fp=fopen("file.txt","w");
	
	c=fgetc(fp);
	
	if (ferror(fp))
	{
		printf("Read file.txt error.\n");
	}
	
	clearerr(fp);
	
	if (ferror(fp))
	{
		printf("Read file.txt error.\n");
	}
	
	fclose(fp);
	
	system("pause");
	
	return 0;
}
