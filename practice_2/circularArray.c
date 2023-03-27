#include <stdio.h>

void gokStepsForward(int* arr,int i,int k,int n)
{
		int index=(i+k)%n;

		printf("You are at %d and this has val=%d",index,arr[index]);
}

void printAllSubarray(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",arr[(i+j)%n]);
		}

		printf("\n");
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5;

	// gokStepsForward(arr,2,4,n

	printAllSubarray(arr,n);
}