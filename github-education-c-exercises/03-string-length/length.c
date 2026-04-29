#include <stdio.h>

// fonksiyon prototipi
int string_length(char str[]);

int main(void)
{
    char str[100];

    printf("Input: ");
    scanf("%s", str);

    printf("Length: %d\n", string_length(str));
}

int string_length(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}