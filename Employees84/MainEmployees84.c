#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "declaration.h"


struct employee
{
	int id; // ���������� ����
	char name[20];
	float Income;
	float Premium;
	float RegularBonus;
	float ActualBonus;
	float Rise;
	float RegularHours;
	float ActualHours;
	float OverTime;
	float Wage;
	float BonusPay;
	float RisePay;
	float OverTimePay;
	float Tax;
	int TeudatZehut;
};
struct employee  Tom, Mary, John;




//float quarter = 3;
//float month = 20;
//float day = 8;



int main()
{
//	float wageTom = countWage(39000, 0, 520, 480, 30, 0); // test
//	printf("Wage Tom = %.2f", wageTom);
	/**** Common data ****/

	//initialize employee
	TomInitialize();
	MaryInitialize();
	JohnInitialize();
	/****** Tom *****/
	printInfo(&Tom);


	/****** Mary *****/
	printInfo(&Mary);

	/****** John *****/
	printInfo(&John);

	int res;
	res = scanFunction(3,5);
	printFunction(res / 10, res % 10);
	return 0;
}
