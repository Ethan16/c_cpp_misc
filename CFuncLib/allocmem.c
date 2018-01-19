#include <stdio.h> 
#include <dos.h>
#include <alloc.h>    /*没有这个头文件*/

int main(int argc,char *argv[])
{
	unsigned int size,segp;
	int stat;
	
	size=64;
	/*分配dos存储段。应该是已废弃的函数*/
	stat=allocmem(size,&segp);
	
	if (stat==-1)
	    printf("Allocate memory at segment : %x \n",segp);
	else 
	    printf("Failed : Maximum number of paragraphs availables is %u \n",stat);
	return 0;
}
