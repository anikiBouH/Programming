#include <stdio.h>

int main(void)
{
    int age;
    char name[10];
    float weight;
    scanf("%d %s %f", &age, &name, &weight);

    printf("Name: %s \t Age = %d \t Weight = %f",name,  age, weight);
    return 0;
}
