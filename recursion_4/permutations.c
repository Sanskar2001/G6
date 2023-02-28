#include <stdio.h>
void permut(char* str,int idx)
{

	// fix the char at idx 
	// then explore the other combinations

	for(int i=idx;i<strlen(str);i++)
	{
		char tmp=str[i];
		str[i]=str[idx];
		str[idx]=str[i];

		permut(str,idx+1);
	}

}
int main()
{
	char str[10]="abc";

	permut(str,0);
}