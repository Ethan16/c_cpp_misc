#include <stdio.h> 
#include <time.h>
#include <string.h>

int main(int argc,char *argv[])
{
	struct tm t;
	char str[80];
	
	t.tm_sec=45;
	t.tm_min=23;
	t.tm_hour=11;
	t.tm_mday=12;
	t.tm_mon=10;
	t.tm_year=117;
	t.tm_yday=0;
	t.tm_wday=5;
	t.tm_isdst=0;
	
	strcpy(str,asctime(&t));
	
	printf("t converse to string is : %s",str);
	
	return 0;
	
}
