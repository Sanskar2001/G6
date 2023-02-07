#include <stdio.h>
int addnos(int a,int b);
int a=55,b=65;
void swap(int a,int b)
{
	 int tmp=a;
	 a=b;
	 b=tmp;

	 printf(" Inside swap function a=%d b=%d \n",a,b);

}

void swapByPointer(int* a,int* b)
{
	int tmp= *a;
	*a=*b;
	*b= tmp;
	printf(" Inside swap function a=%d b=%d \n",*a,*b);
}

void func()
{
	printf("%d %d",a,b);
}

int main()
{
	int a=10,b=5;

	// swap(a,b);
	func();
	//  swapByPointer(&a,&b);

	// printf("Inside main a=%d b=%d",a,b);

	// printf("Inside Main sum is %d",addnos(a,b) );
}	

int addnos(int a,int b)
{
	return a+b;
}