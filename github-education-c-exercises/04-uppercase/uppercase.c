#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[100];

    printf("Before: ");
    scanf("%[^\n]", s);  // boşlukları da alır

    printf("After: ");

    // TODO: loop through the string and print toupper(...) for each char
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", toupper(s[i]));
    }

    printf("\n");
}