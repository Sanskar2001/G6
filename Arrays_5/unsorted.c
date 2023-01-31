#include <stdio.h>
#include <limits.h>
int main()
{
	int arr[]={1,2,3,4,5,8,6,7,9,10,11};
	int n=sizeof(arr)/sizeof(int);

	int largest=INT_MIN;
	int smallest=INT_MAX;

	for (int i = 1; i < n-1; ++i)
	{
		if(arr[i]<arr[i-1])
		{
			largest = largest<arr[i] ? arr[i] : largest;
			smallest= smallest>arr[i] ? arr[i] : arr[i];
		}

		if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
		{
			largest = largest<arr[i] ? arr[i] : largest;
		}

	}


	// largest that is placed wrong
	// smallest that is placed wrong

	printf("Largest=%d \n smallest=%d \n",largest,smallest);

	int i=0;
	while(arr[i]<smallest)
	{
		i++;
	}

	int j=n-1;
	while(arr[j]>largest)
	{
		j--;
	}

	printf("%d %d",i,j);

}