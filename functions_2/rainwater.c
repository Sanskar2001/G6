#include <stdio.h>

int max(int a,int b)
{
	return (a>b) ? a : b;
}
int min(int a,int b)
{
	return (a<b) ? a :b;
}
int main()
{
	int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
	int n=sizeof(arr)/sizeof(int);


	int lmax[n],rmax[n];

	lmax[0]=arr[0];

	rmax[n-1]=arr[n-1];

	for(int i=1;i<n;i++)
	{
		lmax[i]= max(lmax[i-1],arr[i]);
	}

	for(int i=n-2;i>=0;i--)
	{
		rmax[i]=max(rmax[i+1],arr[i]);
	}


	int sum=0;
	for(int i=0;i<n;i++)
	{

		int currentHieght=min(lmax[i],rmax[i]);
		int effHt=currentHieght-arr[i];

		sum+=effHt;

	}

	printf("Total water stored=%d",sum);
}