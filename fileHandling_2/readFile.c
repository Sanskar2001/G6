#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fp;



	fp=fopen("demo.txt","r");

	if(fp==NULL)
	{   printf("can't open file");
		exit(1);
	}


	// i need to read the file

	char ch;
	ch=fgetc(fp);
	// fscanf(fp,"%c",&ch);
  	// printf("EOF=%d\n",EOF);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch= fgetc(fp);
	}






	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);	
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);

	// while(ch!=EOF)
	// {
	// 	printf("%c",ch);
	// 	fscanf(fp,"%c",&ch);
	// }


	



}