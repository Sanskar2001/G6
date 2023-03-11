#include <stdio.h>
/* Given a text file, u need to 
	tell me count of the following
	->chars 
	->lines
	->blank spaces

	countChar=0
	countLines=0
	countSpace=0


	ch->char countChar++
	ch="\n" countLines++
	ch=" " countSpace++

	char ch;
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch= fgetc(fp);
	}
*/	
int main()
{
		FILE *fp;
		fp=fopen("demo.txt","r");
		char ch=fgetc(fp);

		int countChar,countLines,countSpaces;

		countChar=countLines=countSpaces=0;

		while(ch!=EOF)
		{
			if(ch==' ')
			countSpaces++;

			else if(ch=='\n')
			countLines++;

			else
			countChar++;

			ch=fgetc(fp); 
		}

		printf("No of spaces=%d\n",countSpaces);
		printf("No of lines=%d\n",countLines);
		printf("No of chars=%d\n",countChar) ;
}