#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum , digit, temp;
    scanf("%i", &num);
    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        temp = temp /10;
        sum += fact(digit);
    }

    if (sum == num)
        printf("Strong FSH5");
    else
        printf("Msh Strong");

    return 0;
}

int fact (int num)
{
    int i, fact = 1;
    if (num == 0 || num == 1)
        return 1;
    for (i=1; i<=num; i++)
    {
        fact *= i;
    }

    return fact;
}
