#include <stdio.h>
int bsearch(int* arr,int s,int e,int key)
{
	if(s>e)
	return -1;

	int mid=(s+e)/2;

	if(arr[mid]==key)
		return mid;

	else if(arr[mid]>key)
		e=mid-1;

	else
	s=mid+1;

	return bsearch(arr,s,e,key);
}
int main()
{
	int arr[7]={1,2,7,11,15,17,20};
	int key=1;
	int n=7;

	printf("%d lies at %d",key,bsearch(arr,0,n-1,key));

}