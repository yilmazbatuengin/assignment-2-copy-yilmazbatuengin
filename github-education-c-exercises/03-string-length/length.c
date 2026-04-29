#include <cs50.h>
#include <stdio.h>

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int len = string_length(name);
    printf("%i\n", len);
}

int string_length(string s)
{
    // TODO: count chars until '\0'
    return 0;
}
