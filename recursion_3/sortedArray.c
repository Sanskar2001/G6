#include <stdio.h>
#include<stdbool.h>
bool isSorted(int* arr,int idx,int n)
{
	if(idx==n-1)
		return true;


	if(arr[idx]>arr[idx+1])
	return false;

	return isSorted(arr,idx+1,n);
}
int main()
{
	int arr[7]={1,2,30,4,5,8,10};
	int n=7;

	isSorted(arr,0,n) ? printf("Array is sorted") : printf("Array is unsorted");
}