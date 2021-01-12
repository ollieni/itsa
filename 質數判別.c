#include<stdio.h>
#include<math.h>
int is_prime(int a)
{
    int i;
    if(a==1)
    {
        return 0;
    }
    else
    {
        for(i=2;i<a/2;i++)
        {
            if((a%i)==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int num;
    scanf("%d",&num);
    if(is_prime(num)==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
