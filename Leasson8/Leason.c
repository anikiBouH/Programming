#include <stdio.h>
int timeToWork(int transport);
int timeToWorkByHour(float hour);
void taxi(int code);

int main()
{
	/*     int timeToWork(int transport)
	 *
	 *     transport -> bus(1) - 27 min
	 *               -> train(2) - 23 min
	 *               -> auto(3) - 19 min
	 *               -> bike(4) - 15 min
	 *
	 **/
	int transport;
	printf("Выберите транспорт:\nАвтобус - 1\nПоезд - 2\nАвто - 3\nВелосипед - 4\nПожалуйста, сделайте свой выбор...\n");
	fflush(stdout);
	scanf("%d",&transport);
	int res = timeToWork(transport);
	printf("Вам потребуется около %d мин\n", res);

	/*int timeToWorkByHour(float hour)
	 *
	 *     [6.00] - 8.00 - > 47 min
	 *     [8.00] - [10.00] - > 53 min
	 *     10.00 - [12.00] -> 29 min
	 *     */
	float hour;
	printf("Введите время\n");
	fflush(stdout);
	scanf("%f",&hour);
	res = timeToWorkByHour(hour);
	printf("Вам потребуется около %d мин\n", res);
	/*
	 *   void taxi(int code)
	 *   Haim ->1
 	 *   David->2
 	 *   Hanna->3
 	 *   Ilana->4
 	 *   use if-else if-else
 	 *   */
	int code;
	printf("Введите номер такси\n");
	fflush(stdout);
	scanf("%d",&code);
	taxi(code);

	return 0;
}

void taxi(int code)
{
	if (code == 1) {printf("Haim\n");}
	else if (code == 2) {printf("David\n");}
	else if (code == 3) {printf("Hanna\n");}
	else if (code == 4) {printf("Ilana\n");}
	else {printf("ERROR: wrong choice\n");}

}

int timeToWork(int transport)
{
	int res = 0;
	if (transport == 1) {res = 27;}
	else if (transport == 2) {res = 23;}
	else if (transport == 3) {res = 19;}
	else if (transport == 4) {res = 15;}
	else {printf("ERROR: wrong choice\n");}
	return res;
}

int timeToWorkByHour(float hour)
{
	int res = 0;
	if (hour<6){printf("ERROR: man is sleeping\n");}
	else if (hour<8){ res = 47;}
	else if (hour<=10){ res = 53;}
	else if (hour<=12){ res = 29;}
	else {printf("ERROR: man is late\n");}
	return res;
}
