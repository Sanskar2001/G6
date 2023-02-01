#include <stdio.h>
#include <limits.h>
int main()
{
	int arr[]={1,2,3,4};
	int n=4;
	int maxSum=INT_MIN;
	for (int st= 0; st < n; st++)
	{
		for (int en=st+1; en < n; en++)
		{	
			int currSum=0;
			for (int k=st; k<=en ; k++)
			{
				currSum+=arr[k];
			}


			maxSum= maxSum<currSum ? currSum : maxSum;
		
		}
	}

	printf("%d ",maxSum);
}