#include<iostream>
int main () {

	char str[1000],ch;
	int n;

	gets(str);
	scanf("%d%c",&n,&ch);

	

	str[n]=ch;

	printf("%d %c",n,ch);
	printf("%s",str);
	return 0;
}