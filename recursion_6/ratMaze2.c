#include <stdio.h>
int noOfWays=0;
void cntPaths(int mat[][4],int n,int x,int y)
{

	if(x>=n || y>=n )
		return;

	if(mat[x][y]==0)
		return;

	if(x==n-1 && y==n-1)
	{
		noOfWays++;
		return;
	}

	cntPaths(mat,n,x+1,y);
	cntPaths(mat,n,x,y+1);
}

void printPath(int path[][4],int n)
{

	for (int i = 0; i < n; ++i)
		{
			for (int j= 0; j < n; ++j)
			{
				printf("%d ",path[i][j]);

			}
			printf("\n");
		}
		printf("\n\n");
}

void printAllPaths(int mat[][4],int x,int y,
	int n,int path[][4])
{

	if(x>=n || y>=n)
	return;
	
	if(mat[x][y]==0)
	return;

	if(x==n-1 && y==n-1)
	{
		path[x][y]=1;
		printPath(path,n);
		path[x][y]=0;
		return;
	}

	path[x][y]=1;
	printAllPaths(mat,x+1,y,n,path);
	printAllPaths(mat,x,y+1,n,path);
	path[x][y]=0;

}

int main()
{
	int mat[4][4]={
		{1,1,1,1},
		{1,0,0,1},
		{1,0,0,1},
		{1,1,1,1}
	};
	int n=4;
	cntPaths(mat,n,0,0);

	printf("Total No of Ways=%d\n",noOfWays);

	int path[4][4]={0};

	printAllPaths(mat,0,0,n,path);
}