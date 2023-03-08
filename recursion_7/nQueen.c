#include <stdio.h>
#include<stdbool.h>
// to check whether we can place n queens in a nXn board or not.

bool isSafe(int board[][4],int x,int y, int n)
{

	// check whether x,y cell is safe or not

	// current col

	// col
	for(int i=x-1;i>=0;i--)
	{
		if(board[i][y]==1)
		return false;
	}

	// left diagonal
	int i=x-1;
	int j=y-1;

	while( i>=0 && j>=0 )
	{
		if(board[i][j]==1)
			return false;
		i--;
		j--;
	}

	// right diagonal
	i=x-1;
	j=y+1;

	while(i>=0 && j<n)
	{
		if(board[i][j]==1)
			return false;

		i--;
		j++;
	}

	return true;

}

void printMatrix(int mat[][4],int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j= 0; j < n; ++j)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
}

bool nqueen(int board[][4],int currRow,int n)
{
	// base conditions
	if(currRow==n)
	{
		printMatrix(board,n);
		return false;
	}
	


	// Standing Currently Row currRow->0 to currRow->3

	for(int i=0;i<n;i++)
	{
		// traversing current row

		if(isSafe(board,currRow,i,n))
		{
			board[currRow][i]=1;
			bool canPlaceRemainingQueens=nqueen(board,currRow+1,n);


			if(canPlaceRemainingQueens)
				return true;

			board[currRow][i]=0;
		}


	}

	return false;
}
int main()
{
	int board[4][4]={0};
	int n=4;

	bool ans=nqueen(board,0,n);

	if(ans)
	printf("Yes we can place n queens ");
	
	else
	printf("Not possible");



}