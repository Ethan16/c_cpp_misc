#include <stdio.h>
#include <stdlib.h>
#include <dir.h>

int main(void)
{
	char *s;
	char drive[MAXDRIVE];
	char dir[MAXDIR];
	char file[MAXFILE];
	char ext[MAXEXT];
	int flags;

	s=getenv("COMSPEC");
	flags=fnsplit(s,drive,dir,file,ext);

	printf("Command process info : \n");

	if (flags & DRIVE)
		printf("\tdrive : %s .\n",drive );
	if (flags & DIRECTORY)
		printf("\tdirectory : %s\n",dir );
	if (flags & FILENAME)
		printf("\tfilename : %s\n",file );
	if (flags & EXTENSION)
		printf("\textension : %s\n",ext );

	return 0;
}