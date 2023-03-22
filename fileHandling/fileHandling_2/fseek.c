#include <stdio.h>
int main()
{
	// fseek(fp,offset,reFPoint) 
	FILE *fp=fopen("demo.txt","r+");

	fputc('*',fp);

	fseek(fp,0,SEEK_SET);
	

	char ch=fgetc(fp);

	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}

	fclose(fp);


}