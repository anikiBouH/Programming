/*
Homework
1. Update the code with checking if the multiplication result is more than 9.
If yes - decrease result by 9.
2. *** Read about Luhn algorithm - count control digit for credit card
3. Implement new function generateTeudatZehut() which should generate teudat zehut randomly,
and then call countKey() function for count control digit
4. Add scanf() in order to ask user for the first digit of teudat zehut number and then call
generateTeudatZehut(), which should generate all the rest digits, then call countKey()
function for count control digit. Print the generated teudat zehut number,
including control digit.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateTeudatZehut(int firstDigit);
int countKey(int num);




int main()
{
	srand(time(NULL));
	int res;
	long long count = 0;

   	do
   	{
   		count++;
   		res = generateTeudatZehut(3);
   	} while(res!=346283435);
   	printf("%I64d", count);


  return 0;
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

	int numTZ = 0;
	int i;
	for(i = 0; i<=7; i++)
	{
		numTZ = numTZ*10 + rand()%10;
	}
	int key = countKey(numTZ);
	numTZ = numTZ*10+key;

	return numTZ;
}


/*

Teudat zehut number:


						number   control digit
		position		12345678
						32103212 x = 4
1. multiplication:		12121212
						34103414 -> ???? ????????? ????????? ?????? 9 ??????? ?? ???? 9;
2. sum:					3 + 4 + 1 + 0 + 3 + 4 + 1 + 4 = 20
3. remainder:			20 % 10 = 0
4. counting:			10 - remainder = 10


*/
