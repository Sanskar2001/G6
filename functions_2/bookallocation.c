#include<stdio.h>
#include <stdbool.h>
bool canAllocate(int arr[],int n,int m,int maxNoofPages)
{
	int cnt=1;
	int noofPagesReadByCurrent=arr[0];

	for(int i=1;i<n;i++)
	{
		if(noofPagesReadByCurrent+arr[i]>maxNoofPages)
		{
			cnt++;
			noofPagesReadByCurrent=arr[i];
			if(cnt>m)
				return false;

		}
		else
		noofPagesReadByCurrent+=arr[i];
	}


	return true;
}
int main()
{
	int n=4;
	int arr[]={10,20,30,40};
	int m=2;

	int s=0,e,mid;

	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}

	e=sum;
	int ans=0;
	while(s<=e)
	{
		mid=(s+e)/2;

		if(canAllocate(arr,n,m,mid))
		{
			ans=mid;
			e=mid-1;
		}
		else
		s=mid+1;
	}

	printf("Min no of pages read by any student is %d",ans);
}