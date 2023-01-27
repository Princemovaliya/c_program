#include <stdio.h>

int main()
{
    int number, odd = 0, even = 0;
    printf("enter your number here: ");
    scanf("%d", &number);
    for(int i=0;i<number;i++)
    {
        if (number % 10 % 2)
            odd++;
        else
            even++;
        number /= 10;
    }

    printf("there are %d odd numbers and %d even numbers.", odd, even);

    return 0;
}