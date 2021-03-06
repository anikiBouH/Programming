#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct employee
{
	int id; // ?????????? ????
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

int helpIdDataTypeLength = 7;
char helpIdDataType[7][20] =
	{ "Wage",
	  "BonusPay",
	  "Income",
	  "Tax",
	  "TeudatZehut",
	  "RegularBonus",
	  "ActualHours",
	};



float quarter = 3;
float month = 20;
float day = 8;





float employeeFunction(struct employee* emp, int idDataType)
{
	switch (idDataType)
	{
		case 1: return emp->Wage;
		case 2: return emp->BonusPay;
		case 3: return emp->Income;
		case 4: return emp->Tax;
		case 5: return emp->TeudatZehut; // type int not float;
		case 6: return emp->RegularBonus;
		case 7: return emp->ActualHours;
		default: printf("Error: idDataType not exist");
				return -1;
	}
	return 0;
}
	/********* Service functions *********/


void printInfo(struct employee* emp)
// ???? ??????? ??????? ??? ?????????? ? ?????????
// ????? ??? ?????? switch/case ? idDataType ???????? ?????? ??????????? ??????????
{
	printf("//*****%s*****//\n", emp->name);
	printf("Income = %.2f\n", emp->Income);
	printf("Wage = %.2f\n", emp->Wage);
	printf("Bonus pay = %.2f\n", emp->BonusPay);
	printf("Overtime pay = %.2f\n", emp->OverTimePay);
	printf("Premium = %.2f\n", emp->Premium);
	printf("Rise pay = %.2f\n", emp->RisePay);
	printf("Tax = %.2f\n", emp->Tax);
	printf("TeudatZehut = %d\n", emp->TeudatZehut);
}


float countRegularHours(float quarter, float month, float day)
{
	float res = quarter * month * day;
	return res;
}


float countBonusPay(float hours, float bonus, float wage)
{
	float res = hours * bonus * wage / 100;
	return res;
}

float countOverTimePay(float overTime, float wage)
{
	float res = overTime * wage * 2;
	return res;
}

float countOverTime(float regularHours, float actualHours)
{
	if (regularHours >= actualHours ) {return 0;}
	float res = actualHours - regularHours;

	return res;
}

float countRisePay(float rise, float quarter)
{
	float res = rise * quarter;
	return res;
}

float countWage(float income, float premium, float rise,
		float hours, float bonus, float overTime)
{
	float res = (income - premium - rise * 3) / (hours + hours * bonus/100 + overTime * 2);

	return res;
}

float countTax(float salaryRegular, float extraPayments)
{
	float res=0;
	res = salaryRegular*0.15 + extraPayments*0.2;
	return res;
}

int countKey(int num)
{
	int digit = 0, sum = 0, res = 0, count = 0;

	do
	{
		digit = num % 10;
		num = num / 10;
		if(count % 2 == 0)
		{
			digit = digit * 2;
			if (digit > 9) digit -= 9;
		}

		sum = sum + digit;
		count ++;
	}
	while(num != 0);

	res = 10 - sum % 10;
	res %= 10;

	return res;
}

int generateTeudatZehut(int firstDigit)
{
	srand(time(NULL));
	int numTZ = firstDigit;
	int i;
	for(i = 0; i<=6; i++)
	{
		numTZ = numTZ*10 + rand()%10;
	}
	int key = countKey(numTZ);
	numTZ = numTZ*10+key;

	return numTZ;
}
void printHelpIDDataType()
{
	int i;
	printf("\n");
	for(i = 0; i<helpIdDataTypeLength; i++)
	{
					printf("%d -> %s\n",  i+1, helpIdDataType[i]);
	}

}

int scanFunction(int maxId, int maxIdDataType)
{
	int id;
	int idDataType;
	//int res;
	do
	{
		printf("Enter id from 1 to %d\n", maxId);
		printf("1 -> Tom\n");
		printf("2 -> Mary\n");
		printf("3 -> John\n");
		fflush(stdout);
		scanf("%d", &id);
	}while(id<0 || id>maxId);


	do
	{
		printf("Enter idDataType from 1 to %d\n", maxIdDataType);
		printHelpIDDataType();
		fflush(stdout);
		scanf("%d", &idDataType);
	}while(idDataType<0 || idDataType>maxIdDataType);
	//res[0] = id;
	//res[1] = idDataType;
	return id*10+idDataType;//??? ??? ???? ??????????
}


void TomInitialize()
{
	Tom.id = 1;
	strcpy(Tom.name, "Tom");
	Tom.Income = 39000;
	Tom.Premium = 0;
	Tom.RegularBonus = 30;
	Tom.ActualBonus = Tom.RegularBonus / 1.5;
	Tom.Rise = 520;
	Tom.RegularHours = countRegularHours(quarter,month,day);
	Tom.ActualHours = Tom.RegularHours/3*2.5;
	Tom.OverTime = countOverTime(Tom.RegularHours, Tom.ActualHours);
	Tom.Wage = countWage(Tom.Income,Tom.Premium,Tom.Rise,
							Tom.RegularHours,Tom.RegularBonus,Tom.OverTime);
	Tom.BonusPay = countBonusPay(Tom.ActualHours,Tom.ActualBonus, Tom.Wage);
	Tom.RisePay = countRisePay(Tom.Rise,quarter);
	Tom.OverTimePay = countOverTimePay(Tom.OverTime, Tom.Wage);
	Tom.Tax = countTax(Tom.Wage*Tom.ActualHours, Tom.BonusPay + Tom.RisePay + Tom.OverTimePay + Tom.Premium);
	Tom.TeudatZehut = generateTeudatZehut(Tom.id);

}
void MaryInitialize()
{
	Mary.id = 2;
	strcpy(Mary.name, "Mary");
	Mary.Income = 31000;
	Mary.RegularBonus = 25;
	Mary.ActualBonus = Mary.RegularBonus;
	Mary.Rise = 0;
	Mary.RisePay = countRisePay(Mary.Rise,quarter);
	Mary.RegularHours = countRegularHours(quarter,month,day);
	Mary.ActualHours = 500;
	Mary.Wage = (employeeFunction(&Tom, 1)+15+5) /2;// (TomFunction(1)+15 + 5) / 2;
	Mary.BonusPay = countBonusPay(Mary.RegularHours,Mary.ActualBonus, Mary.Wage);
	Mary.OverTime = countOverTime(Mary.RegularHours, Mary.ActualHours);
	Mary.OverTimePay = countOverTimePay(Mary.OverTime, Mary.Wage);
	Mary.Premium = Mary.Income - Mary.Wage*Mary.RegularHours - Mary.BonusPay - Mary.RisePay - Mary.OverTimePay;
	Mary.Tax = countTax(Mary.Wage*Mary.RegularHours,Mary.BonusPay + Mary.RisePay+Mary.OverTimePay + Mary.Premium);
	Mary.TeudatZehut = generateTeudatZehut(Mary.id);
}
void JohnInitialize()
{
	John.id = 3;
	strcpy(John.name, "John");
	John.RegularHours = countRegularHours(quarter,month,day);
	John.ActualHours = employeeFunction(&Mary, 7)-5*day;// MaryFunction(7)-5*day;
	John.Wage = employeeFunction(&Mary, 1) - 5 ;//MaryFunction(1) - 5;
	John.RegularBonus = employeeFunction(&Tom, 6)/1.5; //TomFunction(6) / 1.5;
	John.ActualBonus = John.RegularBonus;
	John.BonusPay = countBonusPay(John.ActualHours,John.ActualBonus,John.Wage);
	John.Premium = 0;
	John.Rise = 0;
	John.RisePay = countRisePay(John.Rise,quarter);
	John.OverTime = countOverTime(John.RegularHours, John.ActualHours);
	John.OverTimePay = countOverTimePay(John.OverTime, John.Wage);
	John.Tax = countTax(John.Wage*John.ActualHours, John.BonusPay + John.RisePay + John.OverTimePay + John.Premium);
	John.Income = John.Wage*John.ActualHours + John.BonusPay + John.RisePay + John.OverTimePay + John.Premium;
	John.TeudatZehut = generateTeudatZehut(John.id);
}

void printFunction(int id, int idDataType)
{
	// ?? ???? ???? ?? ? ? ????????? ???????????????? ??? ??? C#
	// using System.Collections.Generic;
	// using System.Linq;
	// ...
	// List<employee> employees = new List<employee>();
	// name = employees.Where( x.id => id ).name;
	// ...
	switch (id)
	{
		case 1: switch (idDataType)
				{
					case 1: printf("%s Wage = %.2f", Tom.name, employeeFunction(&Tom, 1));
							break;
					case 2: printf("%s BonusPay = %.2f", Tom.name, employeeFunction(&Tom, 2));
							break;
					case 3: printf("%s Income = %.2f", Tom.name, employeeFunction(&Tom, 3));
							break;
					case 4: printf("%s Tax = %.2f", Tom.name, employeeFunction(&Tom, 4));
							break;
					case 5: printf("%s TeudatZehut = %.0f", Tom.name, employeeFunction(&Tom, 5));
							break;
					case 6: printf("%s RegularBonus = %.2f", Tom.name, employeeFunction(&Tom, 6));
							break;
					case 7: printf("%s ActualHours = %.2f", Tom.name, employeeFunction(&Tom, 7));
							break;
					default: printf("Error: idDataType not exist");
				}
				break;
		case 2: switch (idDataType)
				{
					case 1: printf("%s Wage = %.2f", Mary.name, employeeFunction(&Mary, 1));
							break;
					case 2: printf("%s BonusPay = %.2f", Mary.name, employeeFunction(&Mary, 2));
							break;
					case 3: printf("%s Income = %.2f", Mary.name, employeeFunction(&Mary, .3));
							break;
					case 4: printf("%s Tax = %.2f", Mary.name, employeeFunction(&Mary, 4));
							break;
					case 5: printf("%s TeudatZehut = %.0f", Mary.name, employeeFunction(&Mary, 5));
							break;
					case 6: printf("%s RegularBonus = %.2f", Mary.name, employeeFunction(&Mary, 6));
							break;
					case 7: printf("%s ActualHours = %.2f", Mary.name, employeeFunction(&Mary, 7));
							break;
					default: printf("Error: idDataType not exist");
				}
				break;
		case 3: switch (idDataType)
				{
					case 1: printf("%s Wage = %.2f", John.name, employeeFunction(&John, 1));
							break;
					case 2: printf("%s BonusPay = %.2f", John.name, employeeFunction(&John, 2));
							break;
					case 3: printf("%s Income = %.2f", John.name, employeeFunction(&John, 3));
							break;
					case 4: printf("%s Tax = %.2f", John.name, employeeFunction(&John, 4));
							break;
					case 5: printf("%s TeudatZehut = %.0f", John.name, employeeFunction(&John, 5));
							break;
					case 6: printf("%s RegularBonus = %.2f", John.name, employeeFunction(&John, 6));
							break;
					case 7: printf("%s ActualHours = %.2f", John.name, employeeFunction(&John, 7));
							break;
					default: printf("Error: idDataType not exist");
				}
				break;
	}




}


