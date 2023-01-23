#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4};
    int n=4;
    
    int tmp=arr[0];
    // shift the last element to 0th index
    arr[0]=arr[n-1];

    
    // starting from second last element start shifting all the elements towards right
    int i=n-2;
    while (i>=1)
    {
        
        arr[i+1]=arr[i];
        i--;
    }
   

   arr[1]=tmp;


   for (int i = 0; i < n; i++)
   {
     printf("%d ",arr[i]);
   }
   
    
}