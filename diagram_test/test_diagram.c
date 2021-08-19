#include <stdio.h>
void f1();
int f2();
float f3();

int main(){
	f1();
	f2(0);
	return 0;
}
void f1()
{
	printf("f1\n");
	f2(1);
}
int f2(int flag)
{
	printf("f2\n");
	if (flag == 1){f3();}
	return 25;
}
float f3()
{
	printf("f3\n");
	return 4.765;
}
