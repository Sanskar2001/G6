#include <stdio.h>
int main()
{

	int arr[]={1,2,3,4};
    int n=4;
	int* ptr =arr;


	for(int i=0;i<n;i++)
	{
		printf("Address of %d index is %p and value stored is %d \n",i,ptr,*ptr);
		ptr=ptr+1;
	}
}