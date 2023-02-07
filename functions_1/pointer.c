#include <stdio.h>
int main()
{
	int a=10;

	printf("Address of a is %p \n",&a);


	int* ptr =&a;

	printf("Value of ptr is %p",ptr);
}