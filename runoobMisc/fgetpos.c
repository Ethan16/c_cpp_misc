#include <stdio.h>

int main(int argc,char *argv[])
{
	FILE *fp;
	fpos_t position;
	int c;
	
	fp=fopen("file.txt","w+");
	
	fgetpos(fp,&position);
	
	fputs("Hello world!",fp);
	
	fsetpos(fp,&position);
	
	fputs("这将覆盖之前的内容！",fp);
	while (1)
	{
		c=fgetc(fp);
		if (feof(fp))
		{
			break;
		}
		printf("%c",c);
	}
	
	fclose(fp);
	
	system("pause");
	
	return 0;
}
