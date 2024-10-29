#include <cs50.h>
#include <stdio.h>
int main (void)
{
    int n = get_int("ENTER NUMBER:\n");
    {
         for (int x = 0; x < n; x++ )
        {
            for ( int u = 0; u < x; u++)
            {
                printf("#");

            }
            printf("\n");
        }
    }

}
