#include <stdio.h>
#include <io.h>

int file_exists(char *filename)
{
	return(access(filename,0)==0);
}

int main(int argc,char *argv[])
{
	printf("Dose \"notexists.txt\" exist : %s \n",file_exists("notexists.txt")?"Yes":"No");
	
	printf("Does \"%s\" exist : %s \n",argv[0],file_exists(argv[0])?"Yes":"No");
	
	return 0;
}
