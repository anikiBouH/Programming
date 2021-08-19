#include <stdio.h>
void f1();
void f2();
void f3();
void f4();

int main()
{
	f2(); 
	printf("\n\t");
	f3();
	printf("\n\t\t");
	printf(" BP");
	f1();
	f4();	
	return 0;
}

void f1()
{
	printf("-84");
}

void f2()
{
	printf("Hello");
}
void f3()
{
	printf("course");	
}

void f4()
{
	printf("!");	
}