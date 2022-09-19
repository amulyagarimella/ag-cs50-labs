// Write a function to capitalize every other letter in a string
// Get practice with strings
// Get practice with command line
// Get practice with arrays

#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string s = argv[1];
    for (int i = 0; i < strlen(s); i++)
    {
        if (i % 2 == 1)
        {
            s[i] = toupper(s[i]);
        }
    }
    printf("%s\n", s);
}