#include <stdio.h>
int i=0;
// void shiftAtEnd(int* arr,int key,int i,int n)
// {
// 	if(i==n-1)
// 	return;

// 	if(arr[i]==key)
// 	{
// 		int tmp=arr[i];
// 		arr[i]=arr[i+1];
// 		arr[i+1]=tmp;
// 	}	

// 	shiftAtEnd(arr,key,i,n);
// }
// void shiftAtEnd(int* arr,int key,int n)
// {
// 	if(i==n-1)
// 	return;

// 	if(arr[i]==key)
// 	{
// 		int tmp=arr[i];
// 		arr[i]=arr[i+1];
// 		arr[i+1]=tmp;
// 	}	
// 	i++;

// 	shiftAtEnd(arr,key,n);
// }
void shiftAtEnd(int* arr,int key,int n)
{
	static int i=0;

	if(i==n-1)
	return;

	if(arr[i]==key)
	{
		int tmp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=tmp;
	}	
	i++;

	shiftAtEnd(arr,key,n);
}

int main()
{
	int arr[]={1,2,3,4,5};
	int key=2;
	int n=5;
	shiftAtEnd(arr,key,n);

	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);
	}
}