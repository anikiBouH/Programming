#include <stdio.h>



int main ()
{

	int ind, B, count = 0;
	for(ind=0, B=100;-ind < B; ind--)
	{
		count++;
	}
	printf("%d\n",count);

	count = 0;
	for(ind=0, B=100; ind + B; ind--)
	{
			count++;
	}
		printf("%d\n",count);

	return 0;
}
