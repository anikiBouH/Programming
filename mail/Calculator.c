#include <stdio.h>

float calc(float num1, float num2, char action);

int main()
{
	float num1, num2;
	char action;
	printf("¬ведите первое число\n");
	fflush(stdout);
	scanf("%f",&num1);
	printf("¬ведите второе число\n");
	fflush(stdout);
	scanf("%f",&num2);
	printf("¬ведите действие\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&action);

	float res = 0;
	res = calc(num1,num2,action);
	printf("Result = %f\n",res);


	return 0;
}

float calc(float num1, float num2, char action)
{
	float res = 0;
	switch (action)
	{
		case '+': res = num1 + num2; break;
		case '-': res = num1 - num2; break;
		case '*': res = num1 * num2; break;
		case '/': if(num2 != 0)
					{
						res = num1 / num2;
					} else
					{
						printf("ERROR: divided by zero\n");
					}  break;
		default : printf("ERROR: wrong action\n"); break;
	}
	return res;
	/*
	 * float res = 0;
	 * if (action == '+'){res = num1 + num2;}
	 * else if(action == '-'){res = num1 - num2;}
	 * else if(action == '*'){res = num1 * num2;}
	 * else if(action == '/')
	 * 			{
	 * 				if (num2 != 0) {res = num1 / num2;}
	 * 				else {printf("ERROR: divided by zero\n");}
	 * 			}
	 * else {printf("ERROR: wrong action\n");}
	 */
}
