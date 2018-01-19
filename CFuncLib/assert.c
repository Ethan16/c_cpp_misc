#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct ITEM
{
	int key;
	int value;
}

void addItem(struct ITEM *item_ptr)
{
	assert(item_ptr != NULL);
}

int main(int argc,char *argv[])
{
	addItem(NULL);
	
	return 0;
}
