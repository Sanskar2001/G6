// https://hack.codingblocks.com/app/contests/3942/404/problem
#include<stdio.h>
int main(void) {


	int n;
	scanf("%d",&n);

	int arr[n];


	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);


	int xorSum=0;

	for(int i=0;i<n;i++)
	{
		xorSum=xorSum^arr[i];
	}

	printf("%d",xorSum);
	return 0;
}