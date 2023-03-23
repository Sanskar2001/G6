#include <stdio.h>
void calPower(int a,int n)
{
	int ans=1;

	while(n)
	{
		if(n&1)
		ans=ans*a;

		a=a*a;
		n=n>>1;
	}

	printf("%d ",ans);

}
int main()
{

	int a=3;
	int n=0;
	calPower(a,n);
}