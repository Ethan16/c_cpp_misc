#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*编译不过 ，没有这个库。*/
#include <graphics.h>

int main(int argc,char *argv[])
{
	/*request auto detection.*/
	int gdriver=DETECT,gmode,errorcode;
	int midx,midy;
	int stangle=45,endangle=135;
	int radius=100;
	
	/*init graphics and local variables.*/
	initgraph(&gdriver,gmode,"");
	
	/*read initialization result.*/
	errorcode=graphresult();
	if (errorcode!=grOK)
	{
		printf("Graphics error: %s \n",grapherrormsg(errorcode));
		printf("Press any key to halt: \n");
		getch();
		
		exit(1);
	}
	
	midx=getmaxx / 2;
	midy=getmaxy / 2;
	setcolor(getmaxcolor());
	
	/*draw a arc.*/
	arc(midx,midy,stangle,endangle,radius);
	
	/*clean up.*/
	getch();
	closegraph();
	
	return 0;
	
}
