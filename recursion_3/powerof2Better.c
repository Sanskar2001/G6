#include <stdio.h>
int powerof2(int n)
{

	if(n==0)
	return 1;

	// if(n==1)
	// 	return 2;

	int halfResult=powerof2(n/2);
	int fullResult=halfResult*halfResult;
	if(n%2!=0)
	fullResult*=2;

	return fullResult;
}
int main()
{
	int n=7;

	printf("%d ",powerof2(n));
	
	return 0;
}