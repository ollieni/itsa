#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d",&num);
    int sum=0;
    int i;
    for(i=0;i<=num;i++)
    {
        if(i%3==0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
