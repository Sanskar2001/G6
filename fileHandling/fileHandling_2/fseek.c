#include <stdio.h>
int main()
{
	// fseek(fp,offset,reFPoint) 
	FILE *fp=fopen("demo.txt","r");

	fseek(fp,-10,SEEK_END);

	char ch=fgetc(fp);

	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}

	fclose(fp);


}