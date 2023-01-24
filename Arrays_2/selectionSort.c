#include <stdio.h>
int main()
{
	int arr[]={10,2,20,1,5,4};
	int n=sizeof(arr)/sizeof(int);

	for (int i = 0; i < n-1; ++i)
	{
		int smallest=arr[i];
		int idx=i;
		for (int j= i+1; j<n; j++)
		{
			if(smallest>arr[j])
			{
					smallest=arr[j];
					idx=j;

			}


		}

		int tmp=arr[i];
		arr[i]=smallest;
		arr[idx]=tmp;

	}

	
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);
	}
}