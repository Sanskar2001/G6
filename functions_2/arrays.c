#include <stdio.h>

void func(int arr[],int n)
{
	arr[0]=10;

	printf("Inside func:");

	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

}
int main()
{
	int arr[]={1,2,3};
	int n=3;
	func(arr,n);
	printf("\n Inside main:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}