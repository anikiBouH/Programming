#include <stdio.h>

int main()
{
	int secretNumber = 5;
	int num;
	printf("Введите число ...\n");
	fflush(stdout);
	scanf("%d\n",&num);
	printf("Ваше число: %d\n",num);
	return 0;
}
