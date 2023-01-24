#include <stdio.h>
int main()
{
	int arr[]={1,2,3,4};

	int n=4;


	for (int i = 0; i <n; ++i)
	{
		for (int j = i; j<n ; j++)
		{
			
				for (int k = i; k<=j ; k++)
				{
					printf("%d ",arr[k]);
				}
				printf("\n");
		}

		
	}
}