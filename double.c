#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    string name = get_string("ENTER:\n");
    int length = strlen(name);
    for (int i = 0; i < length - 1; i++)
    {
        if (name[i] > name[i + 1])
        {
            printf("not in alfabetical  order\n");
            return 0;
        }

    }
    printf("in alfabetical order\n");



}
