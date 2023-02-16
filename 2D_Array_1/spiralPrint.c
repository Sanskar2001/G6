#include <stdio.h>
int main()
{
	int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

	/*

		1 2  3  4
		5 6  7  8
		9 10 11 12
	
	*/

	int n=3,m=4;

	int stcol=0,strow=0,enrow=n-1,encol=m-1;

	while(strow<n && enrow>=0 && stcol<m && encol>=0)
	{
		// strows

		for (int i = stcol; i <=encol; ++i)
		{


			printf("%d ",arr[strow][i]);
		}

		strow++;


			for (int i = strow; i <=enrow; ++i)
		{
			
			printf("%d ",arr[i][encol]);
		}

	
		

		encol--;

		//enrow
		if(stcol!=encol)
		{


		for (int i = encol; i >=stcol; i--)
		{
			
			printf("%d ",arr[enrow][i]);
		}
		}

		enrow--;


		// st col

		for (int i = enrow; i >=strow; i--)
		{
			printf("%d ",arr[i][stcol]);
		}

		stcol++;


	}
}