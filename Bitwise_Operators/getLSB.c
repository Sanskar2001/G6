#include <stdio.h>
int getLsb(int n)
{
	int ans=(n&1);
	return ans;
}
int main()
{
	int n=16;
	printf("LSB=%d ",getLsb(n));
}