#include <stdio.h>

int _strlen_recursion(char *s)
{
    // Base case: empty string
    if (*s == '\0')
        return 0;

    // Recursive case: move to the next character and add 1 to the length
    return 1 + _strlen_recursion(s + 1);
}

int main(void)
{
    char str[] = "Hello, World!";
    int length = _strlen_recursion(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
