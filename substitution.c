#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

bool is_valid_key(string key);
void substitute(string text, string key);

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];


    if (!is_valid_key(key))
    {
        return 1;
    }


    string plaintext = get_string("plaintext: ");


    printf("ciphertext: ");
    substitute(plaintext, key);
    printf("\n");

    return 0;
}


bool is_valid_key(string key)
{

    if (strlen(key) != ALPHABET_SIZE)
    {
        printf("Key must contain 26 characters.\n");
        return false;
    }


    bool seen[ALPHABET_SIZE] = {false};

    for (int i = 0; i < ALPHABET_SIZE; i++)
    {

        if (!isalpha(key[i]))
        {
            printf("Key must only contain alphabetic characters.\n");
            return false;
        }


        char lower_char = tolower(key[i]);
        int index = lower_char - 'a';


        if (seen[index])
        {
            printf("Key must not contain repeated characters.\n");
            return false;
        }
        seen[index] = true;
    }
    return true;
}


void substitute(string text, string key)
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char current = text[i];

        if (isalpha(current))
        {

            int index = tolower(current) - 'a';
            char cipher_char = key[index];


            if (isupper(current))
            {
                cipher_char = toupper(cipher_char);
            }

            printf("%c", cipher_char);
        }
        else
        {
            printf("%c", current);
        }
    }
}
