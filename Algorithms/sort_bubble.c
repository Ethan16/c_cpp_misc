#include <stdio.h>
/*bubbleSort()*/
void swap(int A[],int i,int j)
{
    int temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}

void bubbleSort(int A[],int n)
{
	/*每次最大元素就像气泡一样浮到最后*/
	for (int j=0;j<n-1;j++)    
	{
		/*依次比较相邻的两个元素，使较大的那个后移*/
		for (int i=0;i<n-1-j;i++)    
		{
			if(A[i]>A[i+1])
			{
				swap(A,i,i+1);
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int A[]={3,5,7,9,444,3333,23,56};
	int n=sizeof(A)/sizeof(int);

	bubbleSort(A,n);
	printf("bubbleSort result is : \n");

	for (int i=0;i<n;i++)
	{
		printf("%10d\n",A[i] );
	}
	printf("\n");

	return 0;
}
