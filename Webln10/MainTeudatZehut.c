/*
Homework
Update the code with checking if the multiplication result is more than 9.
If yes - decrease result by 9.
*/
#include <stdio.h>
int countKey(int num);
int main()
{
	int num = 0;
	int controlDigit = countKey(num);
	printf("controlDigit = %d", controlDigit);
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
			if (digit>9)
			{
				digit -= 9;
			}
		}
		sum = sum + digit;
		count ++;
	}
	while(num != 0);

	res = 10 - sum % 10;

	return res;
}

/*

Teudat zehut number:


						number   control digit
		position		12345678
						32103210 x = 4
1. multiplication:		12121212
						34103410 -> ???? ????????? ????????? ?????? 9 ??????? ?? ???? 9;
2. sum:					3 + 4 + 1 + 0 + 3 + 4 + 1 + 0 = 16
3. remainder:			16 % 10 = 6
4. counting:			10 - remainder = 4


*/
