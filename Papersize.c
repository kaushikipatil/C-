#include<stdio.h>

int main()
{
    int i=0;
    int length=1189;
    int width=841;
    int c;
    printf("Pages size will be displayed \n");
     printf("A%d \t",i);
     printf("Height= %d \t",length);
     printf("Width= %d \n",width);
    for(i=1;i<7;i++)
    {
        c=length;
        length=width;
        width=c/2;
        printf("A%d \t",i);
        printf("Height= %d \t",length);
        printf("Width= %d \n",width);
    }

}
