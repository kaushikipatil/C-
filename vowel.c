/*Write a program to identify if the character is a vowel or define
*/

#include <stdio.h>

int main()
{
    unsigned char alpha;
    printf("Hello, Please enter the character to check it is vowel or define \n");
    scanf("%c", &alpha);

    if(alpha=='A'||alpha=='I'||alpha=='E'||alpha=='O'||alpha=='U'|| alpha=='a'||alpha=='i'||alpha=='e'||alpha=='o'||alpha=='u')
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("It is a Define");
    }
}
