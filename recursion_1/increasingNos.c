#include <stdio.h>
void printNos(int n)
{
	// base condition
	if(n==0)
	return;

	printNos(n-1);
	printf("%d ",n);
	
}
int main()
{
	int n=5;
	printNos(n);
}