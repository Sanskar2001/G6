#include<stdio.h>
int main()
{
    int arr[]={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    int n=sizeof(arr)/sizeof(int);
    int maxPeakLen=0;
    for (int i = 1; i <= n-2; i++)
    {
         //identify peak
         if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
         {


            // traverse towards left
            int l=i-1;
            int leftlen=1;
            while(l>=1 && arr[l]>arr[l-1])
            {
                l--;
                leftlen++;
            }

            // traverse towards right
            i++;
            int rightLen=1;
            while ( i<=n-2 && arr[i]>arr[i+1])
            {
                i++;
                rightLen++;
            }
            
            // calculate the current peak length
            int currentPeakLen= leftlen+rightLen+1;
            maxPeakLen= (currentPeakLen>maxPeakLen) ? currentPeakLen : maxPeakLen;

         }

    }

    printf("Max peak length=%d ",maxPeakLen);
    
}