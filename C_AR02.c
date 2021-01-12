#include<stdio.h>
int main()
{
    long int a[6];
    int i;
    for(i=0;i<6;i++)
    {
        scanf("%ld",&a[i]);
    }
    int temp = 0;
    for(i=0;i<3;i++)
    {
        temp = a[i];
        a[i] = a[5-i];
        a[5-i] = temp;
    }
    for(i=0;i<6;i++)
    {
        if(i!=5)
        {
            printf("%d ",a[i]);
        }
        else
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
