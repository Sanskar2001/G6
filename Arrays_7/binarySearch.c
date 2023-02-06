#include <stdio.h>
int main()
{
	int arr[]={1,2,4,5,6,10,20,45};
	int n=sizeof(arr)/sizeof(int);
	int target=4;

	int s=0,e=n-1;
	int mid;

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
			printf("%d found at %d",target,mid);
			break;

		}
	}
}