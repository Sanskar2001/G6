#include <stdio.h>
int main()
{
	int n=17;
	int mask=1;

	if((n&mask)==1)
	{
		printf("No is odd ");
	}
	else
	printf("No is even ");
}