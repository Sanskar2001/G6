#include <stdio.h>
int firstOcc(int* arr,int idx,int n,int key)
{
	if(idx==n)
		return -1;

	if(arr[idx]==key)
	 return idx;

	int ans=firstOcc(arr,idx+1,n,key);
	return ans;
}
int main()
{
	int arr[9]={1,2,2,2,3,3,3,4,5};
	int n=9;
	int key=9;
	printf("First occ of %d is %d ",key,firstOcc(arr,0,n,key));

}