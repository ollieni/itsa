#include<stdio.h>
#include<stdlib.h>
int main()
{
    int input;
    int bin[8];
    scanf("%d",&input);
    if(input<0)
    {
        input = input + 256;
    }
    int i;
    for(i=0;i<8;i++)
    {
        bin[i]=input%2;
        input = input/2;
    }
    for(i=7;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
    printf("\n");
    return 0;
}
