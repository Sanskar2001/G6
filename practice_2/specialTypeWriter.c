// https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/description/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int min(int a,int b)
{
	return a<b ? a : b;
}
int minTimeToType(char * word){

	int time=0;
	char curr='a';
	int n=strlen(word);

	for(int i=0;i<n;i++)
	{
		int timeShiftOp1=abs(word[i]-curr);
		int timeShiftOp2=26-timeShiftOp1;

		time+=min(timeShiftOp1,timeShiftOp2)+1;

		curr=word[i];

	}
	return time;

}

int main()
{

	char str[]="abc";
	printf("%d ",minTimeToType(str));
}
