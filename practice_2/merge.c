#include <stdio.h>
int compare(const void * a, const void * b) {
  

   if( (*(int*)a) <(*(int*)b))
   	return -1;

   return 1;
}
void merge(int* arr1,int* arr2,int* c,int n1,int n2)
{


	int i=0,j=0,k=0;



	while(i<n1 && j<n2)
	{
		if(arr1[i]<arr2[j])
		c[k++]=arr1[i++];

		else
		c[k++]=arr2[j++];
	}


	while(i<n1)
	{
		c[k++]=arr1[i++];
	}

	while(j<n2)
	{
		c[k++]=arr2[j++];
	}




}
int main()
{
	int arr1[]={5,2,3},arr2[]={6,4,9};

	int n1=3,n2=3;

	qsort(arr1,n1,sizeof(int),compare);
	qsort(arr2,n2,sizeof(int),compare);


	// for (int i = 0; i < n1; ++i)
	// {
	// 	printf("%d ",arr1[i]);
	// }

	// for (int i = 0; i < n2; ++i)
	// {
	// 	printf("%d ",arr2[i]);
	// }

	int arr[100];

	merge(arr1,arr2,arr,n1,n2);

	for(int i=0;i<(n1+n2);i++)
	{
		printf("%d ",arr[i]);
	}

}