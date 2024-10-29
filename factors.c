#include <cs50.h>
#include <stdio.h>

void prime_factors(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%i ", i);
            n /= i;
        }
    }
    if (n > 1)
    {
        printf("%i ", n);
    }

}

int main(void)
{


    int number = get_int("Enter integer: ");


    printf("prim factors are: ");
    prime_factors(number);
    printf("\n");


}
