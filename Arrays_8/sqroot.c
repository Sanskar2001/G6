#include <stdio.h>
int main()
{
	int n=145;

	int s=0,e=n;
	int mid;

	int isPerfectSquare=0;

	int ans;

	while(s<=e)
	{
		mid=(s+e)/2;

		if(mid*mid==n)
		{
			printf("Square root of %d is %d",n,mid);
			isPerfectSquare=1;
			break;
		}

		else if(mid*mid>n)
		{
			e=mid-1;
		}

		else
		{
			s=mid+1; 
			ans=mid;
		}
	
	}

	if(isPerfectSquare==0)
	{
			printf("Square root of %d is %d",n,ans);
	}
}