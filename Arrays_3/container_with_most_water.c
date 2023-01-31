//https://leetcode.com/problems/container-with-most-water/
int maxArea(int* arr, int n){

int s=0,e=n-1;

int maxArea=0;

while(s<e)
{
    int hieght= (arr[s]<arr[e]) ? arr[s] : arr[e];
    int len=((e-s));
    int currentArea= (hieght*len);

    maxArea=(currentArea>maxArea)? currentArea :   maxArea;


    if(arr[s]>arr[e])
    e--;

    else if(arr[s]<arr[e])
    s++;

    else
    {
        s++;
        e--;
    }

}

return maxArea;

}