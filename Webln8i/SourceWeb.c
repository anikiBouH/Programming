/*
Homework
	1. Implement function which is checking if the entered number
is in range (0 - 9). If yes - should call the function from point 2.
If not - should notify user and suggest to enter correct number.
	2. Implement function which is checking if the entered number
is equal to secretNumber. If yes - should congratulate user.
If not - should notify user and suggest to try again.
	3. Refactor the code:
	- change void functions to int in order to get 0 or 1 while calling
	 them from main(), depending on condition
	- remove function calling isEqualToSecret() from function isInRange()
	- relocate all printf() from both functions to main()
	4. Implement new functionality into main():
	- when entered number is out of range - should not decrease attempts value
	- should give to user some hints - if the secret number greater or less then entered number
	- should end the game when secret number is guessed

*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int isWin(int start, int finish, int actualNumber, int secretNumber, int *attempts);
int isEqualToSecret (int n, int sn);
int invitation (int start, int finish);
int isCountAttempts (int count);
void greaterOrLess(int n, int sn);

int main ()
{
	srand(time(NULL));

	int rangeStart = 1;
	int rangeFinish = 100;
	int secretNumber = rand() % (rangeFinish - rangeStart + 1) + rangeStart;
	int attempts = 10; //количество попыток


	do{

	}while ((isCountAttempts(attempts))&&(!isWin( rangeStart, rangeFinish,
					invitation(rangeStart,rangeFinish),
					secretNumber, &attempts))); //можно добавить запрос, продолжить или нет
	return 0;
}
int isCountAttempts (int count)
{
	switch (count)
	{
		case 1: printf("You have 1 attempt left\n"); break;
		case 0: printf("You have no attempts left\nYou lose!\n"); break;
		default: printf("Number of attempts = %d\n", count); break;
	}

	return count;
}

int invitation (int start, int finish)
{
		int n;
		printf("Enter your number from %d to %d:\n", start, finish);

		fflush(stdout);
		scanf("%d", &n);
		return n;
}

int isWin(int start, int finish, int actualNumber, int secretNumber, int *attempts)
{

	if ((actualNumber>=start)&&(actualNumber<=finish))
			{
				*attempts-=1;
				return isEqualToSecret(actualNumber, secretNumber);
			}
	printf("ERROR: number is not in range\n");
	return 0;
}

int isEqualToSecret (int n, int sn)
{
	if (n==sn)
		{
		 	 printf("You win!\n");
		 	 return 1;
		}

	greaterOrLess(n,sn);

	return 0;
}

void greaterOrLess(int n, int sn)
{
	if (n<sn)
	{
		printf("The hidden number is greater\n");
	}
	else
	{
		printf("The hidden number is less\n");
	}
}
