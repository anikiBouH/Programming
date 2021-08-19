/*
 * test_change.c
 *
 *  Created on: 12.07.2021
 *      Author: Виктория
 */
#include <stdio.h>
float change(float total, float cash, float discount);

int main()
{
	//float change(float total, float cash, float discount);

	float res = change(14000, 13500, 10);

	if (res >= 0)
	{
		printf("Сдача равна = %.2f", res);
	}
	else
	{
		printf("Необходимо доплатить %.f", res);
	}
	return 0;
}

float change(float total, float cash, float discount)
{
	return cash - total*(1-discount/100);
}
