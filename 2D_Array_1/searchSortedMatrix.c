#include <stdio.h>
int main()
{
	int arr[][4]={{10, 20, 30, 40}, 
                               {15, 25, 35, 45},
                               {27, 29, 37, 48},
                             {32, 33, 39, 50}
                   };

      int key=29,n=4;

      int i=0,j=n-1;

      while(i<n && j>=0)
      {
      	if(key==arr[i][j])
      		{printf("Element found at %d %d",i,j);
      	break;}

      	else if(key<arr[i][j])
      	{
      		//discard this column
      		j--;
      	}

      	else
      	i++; // discard current row
      }
}