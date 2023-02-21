#include <stdio.h>
void transpose(int mat[][3],int n)
{


	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			int tmp=mat[i][j];
			mat[i][j]=mat[j][i];
			mat[j][i]=tmp;
		}
	}

}
int main()
{
	int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int n=3;

	printf("Before transpose:\n");

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}

	transpose(mat,n);


	printf("\nAfter transpose:\n");

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}


}