#include <stdio.h>
int main()
{

    char str[100];
    char len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            continue;
        }
        str[len] = str[i];
        len++;
    }
    str[len] = '\0'; // Null-terminate the modified string
    printf("String after removing vowels: %s", str);
    return 0;
}