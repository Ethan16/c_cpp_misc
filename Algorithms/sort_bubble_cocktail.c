#include <stdio.h>
/*CocktailSort()*/
void swap(int A[],int i,int j)
{
    int temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}

void CocktailSort(int A[],int n)
{
	/*初始化边界*/
	int left=0,right=n-1;
	while (left<right)
	{
		for (int i=left;i<right;i++)  /*前半轮，将最大元素放到后面*/
		{
			if (A[i]>A[i+1])
			{
				swap(A,i,i+1);
			}
		}
		right--;
		for(int i=right;i>left;i--)  /*后半轮，将最小元素放前面*/
		{
			if (A[i-1]>A[i])
			{
				swap(A,i-1,i);
			}
		}
		left++;
	}

}

int main(int argc, char const *argv[])
{
	int A[]={3,5,7,9,444,3333,23,56};
	int n=sizeof(A)/sizeof(int);

	CocktailSort(A,n);
	printf("CocktailSort result is : \n");

	for (int i=0;i<n;i++)
	{
		printf("%-10d\n",A[i] );
	}
	printf("\n");

	return 0;
}
