#include <stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("nos.txt","r");

	int x;

	fscanf(fp,"%d",&x);
	printf("First no=%d\n",x);
	fscanf(fp,"%d",&x);
	printf("Second no=%d\n",x);
	fscanf(fp,"%d",&x);
	printf("Third no=%d\n",x);
	fscanf(fp,"%d",&x);
	printf("4th no=%d\n",x);
}