/*

Given a file u need to copy its 
content to another file
using file handling in c
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	// the file from which i am copying
	// source file
	// read mode

	FILE *fp=fopen("demo.txt","r");
	FILE *nfp=fopen("newFile.txt","w");


	if(fp==NULL || nfp==NULL)
	{
		printf("can't open file \n");
		exit(1);
	}


	char ch=fgetc(fp);

	while(ch!=EOF)
	{

		// write char by char in the file newFile.txt
		fputc(ch,nfp);
		ch=fgetc(fp);
	}

	fclose(fp);
	fclose(nfp);
}