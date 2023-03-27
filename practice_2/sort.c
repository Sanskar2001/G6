#include <stdio.h>
int compare(const void * a, const void * b) {
  

   if( (*(int*)a) <(*(int*)b))
   	return 1;

   return -1;
}
int main()
{
	int arr[5]={1,20,-3,40,5};
	int n=5;
	qsort(arr,n,sizeof(int),compare);

	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);
	}



}