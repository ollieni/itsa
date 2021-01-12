#include<stdio.h>
void euc(int a,int b)
{
    while(a>0&&b>0)
    {
        if(a>b)
        {
            a=a%b;
        }
        else
        {
            b=b%a;
        }
    }
    if(a==0)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",a);
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    euc(a,b);
    return 0;
}
