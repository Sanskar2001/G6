#include <stdio.h>
int factorial(int n)
{
 
    int ans=1;

   for(int i=1;i<=n;i++)
   {
   	  ans=ans*i;
   }
   return ans;
}

int main()
{
	int n=5;
	int fact=factorial(n);

	printf("%d ",factorial(n));
	
}