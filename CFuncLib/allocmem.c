#include <stdio.h> 
#include <dos.h>
#include <alloc.h>    /*û�����ͷ�ļ�*/

int main(int argc,char *argv[])
{
	unsigned int size,segp;
	int stat;
	
	size=64;
	/*����dos�洢�Ρ�Ӧ�����ѷ����ĺ���*/
	stat=allocmem(size,&segp);
	
	if (stat==-1)
	    printf("Allocate memory at segment : %x \n",segp);
	else 
	    printf("Failed : Maximum number of paragraphs availables is %u \n",stat);
	return 0;
}
