#include <stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("sample.txt","r");

	if(fp==NULL)
		printf("File not found/can't open file");

	else
		printf("File opened successfully");

	fclose(fp);

}