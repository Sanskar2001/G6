#include <stdio.h>
#include <string.h>
void replacepi(char* str,int idx)
{
	if(idx>=strlen(str))
	{
		return;
	}

	if(str[idx]=='p' && str[idx+1]=='i')
	{
		for(int i=strlen(str);i>=idx;i--)
			str[i+2]=str[i];


	str[idx]='3';
	str[idx+1]='.';
	str[idx+2]='1';
	str[idx+3]='4';

	// replacepi(str,idx+4);

	}
	// else
	// replacepi(str,idx+1);

	replacepi(str,idx+1);

	

}
int main()
{
	char str[100]="iippiipi";
	replacepi(str,0);

	printf("%s ",str);

}