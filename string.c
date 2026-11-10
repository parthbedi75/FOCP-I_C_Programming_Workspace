#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20]; int i, j;

    printf("\n Enter the string");
    fgets(str1, sizeof(str1), stdin);
    for(i = strlen(str1)-1, j = 0; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }
    str2[i] = '\0';
    printf("\n Str1 :%s", str1);
    printf("\n Str2 :%s", str2);
    printf("\n nth char: %c", str1[strlen(str1)]);
}