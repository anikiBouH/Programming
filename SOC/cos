#include <stdio.h>
#include <stdlib.h>

struct worker
{
	char name[50];
	float rate_in_hour;
	float bonus_in_month;
	float premium;

}p1, p2, p3;

void init(struct worker *employee);

int main()
{
	init(&p1);
	printf("Name worker %50s \n", p1.name);
	printf("Rate per hour %f\n", p1.rate_in_hour);
	printf("%% Bonus %f\n", p1.bonus_in_month);
	printf("Premium %f\n", p1.premium);
	return 0;
}

void init(struct worker *employee)
{
	printf("Name worker\n");
	scanf("%s", (*employee).name);
	printf("Rate ($ per hour)\n");
	scanf("%f", &(*employee).rate_in_hour);
	printf("%% Bonus\n");
	scanf("%f", &(*employee).bonus_in_month);
	printf("Premium\n");
	scanf("%f", &(*employee).premium);

}

