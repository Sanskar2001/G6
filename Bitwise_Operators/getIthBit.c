#include <stdio.h>
int getIthBit(int n,int i)
{
	n=n>>(i-1);

	return n&1;
}
int setIthBit(int n,int i)
{
	int mask= 1<<(i-1);

	return (n|mask);
}

void setIthBitByPointer(int* n,int i)
{
	int mask= 1<<(i-1);

	*n= ((*n) | mask);
	
}

int countBits(int n)
{
	int cnt=0;

	while(n)
	{
		n=n>>1;
		cnt++;
	}

	return cnt;
}
int unSetIthBit(int n,int i)
{


		int mask = ~( (1<<(i-1)) );

		return n & mask;
}





int main()
{
	int n=13;
	// 101
	// printf("%d ",getIthBit(n,1));

	printf("Total No of Bits=%d\n",countBits(n));
	// setIthBitByPointer(&n,2);

	// printf("n=%d ",n);

	printf("after unsetting value=%d ",unSetIthBit(n,3));
	// printf("\n %d",setIthBit(n,2));
}