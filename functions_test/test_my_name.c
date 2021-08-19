#include <stdio.h>
void f1();
void f2();
void f3();

int main()
{
	f1();
//	f3();
//	f2();
	printf("Vasil");
	return 0;
}

void f1()
{
	printf("My ");
	f3();
}

void f2()
{
	printf("is ");
}
void f3()
{
	printf("name ");
	f2();
}
