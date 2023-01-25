
// https://leetcode.com/problems/partition-array-into-disjoint-intervals/

int partitionDisjoint(int* arr, int n){

int leftMax[n];
int rightMin[n];


leftMax[0]=arr[0];
rightMin[n-1]=arr[n-1];

for(int i=1;i<n;i++)
{
    leftMax[i] = ( leftMax[i-1]>arr[i] ) ? leftMax[i-1] : arr[i];

    rightMin[n-i-1]=  (rightMin[n-i]<arr[n-i]) ? rightMin[n-i] : arr[n-i];


}

for(int i=0;i<n;i++)
{
    if(leftMax[i]<=rightMin[i])
    return i+1;
}

return 0;

}