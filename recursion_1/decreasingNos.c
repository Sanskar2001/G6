#include <stdio.h>
void printNos(int n)
{
	// base condition
	if(n==0)
	return;
	
	printf("%d ",n);
	printNos(n-1);
	
}
int main()
{
	int n=5;
	printNos(n);
}