#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <dos.h>

int main(int argc,char *argv[])
{
	int i,strt,ch_out,sector;
	char buff[512];
	
	printf("Insert a diskette into drive A and press any key \n");
	
	getch();
	
	sector=0;
	
	/*C-Free debug on windows10:undefined reference to `absread` .*/
	if (absread(0,1,sector,&buff)!=0)
	{
		perror("Disk problem.");
		exit(1);
	}
	printf("Read OK! \n");
	
	strt=3;
	
	for (i=0;i<80;i++)
	{
		ch_out=buff[strt+i];
		putchar(ch_out);
	}
	
	printf("\n");
	
	return 0;
}
