// https://hack.codingblocks.com/app/contests/3942/1086/problem
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(const void* a,const void* b)
{
    char str1[20],str2[20];

    int no1= *(int*)a;
    int no2= *(int*)b;

    sprintf(str1,"%d%d", no1,no2);
    sprintf(str2,"%d%d",no2,no1);
 
	if(strcmp(str1,str2)>0)
	return -1;

	return 1;
   
}
int main() {
    int t;b
	scanf("%d",&t);

	while(t--)
	{
	int n;
	scanf("%d",&n);

	int arr[n];

	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);

    qsort(arr,n,sizeof(int),compare);

    for(int i=0;i<n;i++)
    printf("%d",arr[i]);

	printf("\n");
	}

  
}