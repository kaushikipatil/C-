/* Write a program to identify if the character is an alphabet or not
*/


#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter the number to check the character is letter or not");
    scanf("%c", &c);

    if(isalpha(c))
    {
        printf("It is Alphabet");
    }
    else
    {
        printf("It is not Alphabet");
    }
    return 0;
}
