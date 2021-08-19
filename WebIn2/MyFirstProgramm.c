#include <stdio.h>
void f1();
void f2();
void f3();

int main(){
	f1();
	f2();
	f1();
	f3();
	return 0;
}
void f1()
{
	printf("two beer");
}
void f2()
{
	printf(" or not ");
}
void f3()
{
	printf("?");
}
