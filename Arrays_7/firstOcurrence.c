#include <stdio.h>
int main()
{
	int arr[]={1,2,2,2,3,3,20,35,50};
	int n=sizeof(arr)/sizeof(int);

	int s=0,e=n-1;
	int mid;
	int ans;
	int target=3;


	while(s<=e)
	{
		mid=(s+e)/2;

		if(target>arr[mid])
		{
			s=mid+1;
		}
		else if(target<arr[mid])
		{
			e=mid-1;
		}
		else
		{
			ans=mid;
			e=mid-1;
		}
	}

	printf("First Occurrence of %d is at %d index \n",target,ans);
}