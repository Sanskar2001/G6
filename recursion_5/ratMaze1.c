#include <stdio.h>
#include <stdbool.h>

bool pathExist(int mat[][4],int x,int y,int n)
{
	if(mat[n-1][n-1]==0)
	return false;

	if(x==n-1 && y==n-1)
	return true;

	
	if(x>=n || y>=n)
	return false;

	
	if(mat[x][y]==0)
	return false;


	bool op1=pathExist(mat,x+1,y,n);
	// bool op2=pathExist(mat,x,y+1,n);

	if(op1==true)
	return true;
	
	else
	return pathExist(mat,x,y+1,n);
}
int main()
{
	int mat[4][4]={ {1,0,1,1},
					{1,0,1,1},
					{1,1,1,0},
					{1,1,1,1}
				};
    int n=4;

    pathExist(mat,0,0,n) ? printf("There exists a path ") : printf("Path does not exist");

}