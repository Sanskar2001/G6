#include<stdio.h>
int main()
{
    int arr[]={0,0,1,2,0,0,2,1,0,2};
    int n=sizeof(arr)/sizeof(int);


    int countOfZero=0,countOfTwo=0,countofOne=0;


    for (int i = 0; i <n; i++)
    {
        if(arr[i]==0)
        countOfZero++;

        else if(arr[i]==1)
        countofOne++;

        else
        countOfTwo++;
    }


    // FILL ARRAY
    int i=0;

    
         while (i<n && countOfZero)
         {
            arr[i]=0;
            i++;
            countOfZero--;
         }

         while (i<n && countofOne)
         {
            arr[i]=1;
            i++;
            countofOne--;
         }
         
            while (i<n && countOfTwo)
         {
            arr[i]=2;
            i++;
            countOfTwo--;
         }
         

    
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}