#include <stdio.h>
int main()
{
	int arr[]={10,5,1,7,6};
	int n=5;


	for (int i = 0; i <n; ++i)
	{

		  int isSorted=1;
	     for (int j= 0; j<n-1-i; j++)
	     {
	     	if(arr[j]>arr[j+1])
	     	{ 
	     		// if comparison is taking place
	     		isSorted=0;
	     		int tmp=arr[j+1];
	     		arr[j+1]=arr[j];
	     		arr[j]=tmp;
	     	}
	     }


	     if(isSorted)
	     	break;

	}



	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);
	}
}