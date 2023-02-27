#include <stdio.h>
int lastOcc(int* arr,int idx,int n,int key)
{
	
	if(idx==-1)
	return -1;

	if(arr[idx]==key)
	return idx;

	int ans=lastOcc(arr,idx-1,n,key);
	return ans;

}
int main()
{
	int arr[9]={1,2,2,2,3,3,3,4,5};
	int n=9;
	int key=3;
	printf("First occ of %d is %d ",key,lastOcc(arr,n-1,n,key));
}