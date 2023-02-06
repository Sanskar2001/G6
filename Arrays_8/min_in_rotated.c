#include <stdio.h>
int main()
{
	int arr[]={4,5,6,1,2,3};

	int n=6;

	int s=0,e=n-1,mid;

	while(s<=e)
	{
		mid=(s+e)/2;


		if(arr[mid]>=arr[s])
		{
			// first half
			s=mid+1;
		}

		else if(arr[mid]<=arr[e])
		{
			e=mid-1;
		}



		if(arr[mid]<arr[mid-1])
		{
			printf("Min ele found at %d index",mid);
			break;
		}

		if(arr[mid]>arr[mid+1])
		{
			printf("Min ele found at %d index",mid+1);
		}


	}
}