// https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/description/
int cntGreaterOrEqual(int** arr,int mid,int n)
{
	 int i=0;
	 int cnt=0;
	 while(i<n)
	 {
	 	// traverse rows
	 	int j=n-1;
	 	while(j>=0 && arr[i][j]>mid)
	 	{
	 		j--;
	 	}
	 	cnt+=(j+1);
	 	i++;
	 }
	 return cnt;
}
int kthSmallest(int** arr, int n, int* matrixColSize, int k){

    int s=arr[0][0],e=arr[n-1][n-1],mid;
	int ans;

	while(s<=e)
	{
		mid=(s+e)/2;
        printf("mid=%d ",mid);

		int cnt=cntGreaterOrEqual(arr,mid,n);
        printf("cnt=%d",cnt);
		if(cnt>=k)
		{
			ans=mid;
			e=mid-1;

            printf("s=%d e= %d ans=%d",s,e,ans);
		}
		else
			s=mid+1;
	}

	return ans;


}
