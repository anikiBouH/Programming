#include <stdio.h>
void checkAge(int age);
void fan(int mode);

int main(void)
{
	/*
	 *
	fan(1);
	fan(3);
	checkAge(13);
	checkAge(-3);
	checkAge(152);
	return 0;
	*/
	//int a = 5, b=6, c=4, r;
	//r=(a+b)++*c;
	//r=a<b? ++a:a++;
	int x=17;
	int y=5;
	int z = x<y? x+y : x-y;
	printf("%d\n",z);
	z = x<y? (x+y) : (x-y);
	printf("%d\n",z);

	return 0;
}

void fan(int mode)
{
	if(mode == 0)
			printf("Switched off\n");
	if(mode == 1)
			printf("speed 1\n");
	if(mode == 2)
			printf("speed 2\n");
	if(mode == 3)
			printf("turbo\n");
	/*	 switch(code)
	 	  {
	 	 	 case 0: printf("Switched off\n"); break;
	 	 	 case 1: printf("speed 1"); break;
	 	 	 case 2: printf("speed 2\n"); break;
	 	 	 case 3: printf("Alex, Go!\n"); break;
	 	 	 case 4: printf("turbo\n"); break;
	 	 	 //default ��� �.�. � ����������� ��� ������ ������
	 	   }
	 	   */
}

void checkAge(int age)
{
 /*
  * [0] - [150] - > "true age"
  *   if not - > "ERROR : wrong age"
  */
	if(age >=0 && age<=150){printf("true age\n"); return;}
	printf("ERROR: wrong age\n");
	//(age >=0 && age<=150) ? printf("true age\n"): printf("ERROR: wrong age\n");
}



