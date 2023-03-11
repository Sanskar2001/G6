#include <stdio.h>

/*

	Given two files, one 
	with content and another one empty
	u need to copy the file with content 
	to empty file


		char by char read -> content read read mode
		char by char write->blank write mode
		
		FILE *fp=fopen("demo.txt","r");
		FILE *nfp=fopen("copyFile.txt","w");



		fputc(ch,nfp)
*/

int main()
{
	FILE *fp=fopen("demo.txt","r");
	FILE *nfp=fopen("newFile.txt","w");

	char ch=fgetc(fp);

	while(ch!=EOF)
	{		 
		fputc(ch,nfp);
		ch=fgetc(fp);
	}
}











