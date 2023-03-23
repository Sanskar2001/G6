#include <stdio.h>
int toBinary(int no)
{

	int ans=0;
	int factor=1;
	while(no)
	{
		int rem=no%2;
		ans+=(rem*factor);

		factor=factor*10;
		no=no/2;
	}

	return ans;
}
int main()
{

	printf("%d ", toBinary(15));
}