//https://hack.codingblocks.com/app/contests/3942/213/problem
#include<stdio.h>
int main(void) {

	int n;
	scanf("%d",&n);

	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);


	int xorSum=0;

	for(int i=0;i<n;i++)
	xorSum=xorSum^arr[i];

	int rsb=xorSum & (~(xorSum)+1);

	int a=0,b=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]&rsb)
		a=a^arr[i];

		else
		b=b^arr[i];

	}

	(a<b) ? printf("%d %d",a,b) : printf("%d %d",b,a);

	return 0;
}