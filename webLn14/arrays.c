#include <stdio.h>
int sumArray(int a[], int s);

int main()
{

	float tmp[] = {50, 40, 45};

	int arr[5]= {1,3,2,4,1};

	printf("%d\n", sumArray(arr, 5));
	return 0;
}


int sumArray(int a[], int s)
{
	int res = 0;
	int i;
	for(i = 0; i<s; i++)
	{
		res += a[i];
	}
	return res;

}
