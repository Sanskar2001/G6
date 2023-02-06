#include <stdio.h>
int main()
{
	int arr[]={4,5,1,2,3};
	int n=5;



	int target=2;


	int s=0,e=n-1,mid;


	while(s<=e)
	{
		mid=(s+e)/2;

		if(arr[mid]==target)
		{
			printf("Element found at %d index",mid);
			break;
		}


		if(arr[s]<=arr[mid])
		{

			// first half

			if(target>=arr[s] && target<arr[mid])
			{
				e=mid-1;
			}
			else
			{
				s=mid+1;
			}

		}

		else if(arr[mid]<=arr[e])
		{

			// second half

			if(target>=arr[mid] && target<arr[e])
			{
				s=mid+1;
			}

			else
			e=mid-1;
		}



	}
}