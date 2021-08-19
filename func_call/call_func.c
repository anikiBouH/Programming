#include <stdio.h>
void f1();
int f2();
float f3();

int main(){
	f1();
	int n2;
	float n3;
	n2=f2();
	printf("%d\n",n2);
	n3=f3();
	printf("%.3f\n",n3);
	return 0;
}
void f1()
{
	printf("f1\n");
}
int f2()
{
	printf("f2\n");
	return 25;
}
float f3()
{
	printf("f3\n");
	return 4.765;
}