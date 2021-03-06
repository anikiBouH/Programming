#include <stdio.h>
int timeOnRoute(int lineNumber);
int trafficDelay(float time);

int main()
{

	int result;

	int ln;
	printf("Enter line number\n");
	fflush(stdout);
	scanf("%d", &ln);
	result = timeOnRoute(ln);
	if (result)
	{
		printf("Time on the route ?%d is %d min\n", ln, result);
	}
	else
	{
		printf("ERROR: line number is not available\n");
	}

	float time;
	printf("Enter time\n");
	fflush(stdout);
	scanf("%f", &time);
	result = trafficDelay(time);
	if (result)
	{
		printf("Traffic delay is %d min\n", result);
	}
	else
	{
		printf("ERROR: wrong time\n");
	}

	return 0;
}
/*
 * Homework :
 * 1.
 * int timeOnRoute(int lineNumber)
 * lineNumber - 3 -> 109 min
 *              45 -> 57 min
 *              37 -> 123 min
 *              5 ->  45 min
 */
int timeOnRoute(int lineNumber)
{
	int res;
	/*
	switch (lineNumber) {
		case 3: res = 109;
				break;
		case 45: res = 57;
				break;
		case 37: res = 123;
				break;
		case 5: res = 45;
				break;
		default:
			res = 0;
			break;
	}*/

	 if (lineNumber == 3)
	 {
		 res = 109;
	 }
	 else if (lineNumber == 45)
	 {
		 res = 57;
	 }
	 else if (lineNumber == 37)
	 {
		 res = 123;
	 }
	 else if (lineNumber == 5)
	 {
		 res = 45;
	 }
	 else
	 {
		 res = 0;
	 }
	return res;
}





 /* 2.
 *  int trafficDelay(float time)
 *
 *  [5.00]- 7.30 -> 15 min
 *   [7.30] - [9.45] -> 32 min
 *   9.45 - [11.30] -> 22 min
 *   11.30 - [13.30] -> 10 min
 */
int trafficDelay(float time)
{
	// *** data ***
	int res;

	// *** source ***

	//printf("%f\n", time);
	if ((time - (int) time  - 0.59) > 0.000001) // ?????????? ????? ?? ????? ???? ?????? 59
	{
		return 0;
	}

	if ((time >= 5) && (time<7.30))
	{
		res = 15;
	}
	else if ((time >= 7.30) && (time<=9.45))
	{
		res = 32;
	}
	else if ((time > 9.45) && (time<=11.30))
	{
		res = 22;
	}
	else if ((time > 11.30) && (time<=13.30))
	{
		res = 10;
	}
	else
	{
		res = 0;
	}
	return res;
}
