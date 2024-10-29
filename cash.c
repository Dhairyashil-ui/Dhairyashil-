#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int cents;
    int coins = 0;
    {
        do
        {
            cents = get_int("change woned:");

        }
        while (cents < 1);

        coins += cents/25;
        cents %= 25;

        coins += cents/10;
        cents %= 10;

        coins += cents/5;
        cents %= 5;

        coins += cents/1;

        printf("%i \n", coins);

        return 0;

    }


}
