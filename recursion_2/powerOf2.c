#include <stdio.h>
int powerOf2(int n)
{
	if(n==1)
	return 2;

	// if(n==0)
	// return 1;

	int ans= 2*powerOf2(n-1);
	return ans;


}
int main()
{
	int n=4;
	printf("%d ",powerOf2(n));
}