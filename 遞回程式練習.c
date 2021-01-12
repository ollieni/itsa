#include<stdio.h>
int recursive(int n)
{
    if(n==0||n==1)
    {
        return n+1;
    }
    if(n>1)
    {
        return recursive(n-1)+recursive(n/2);
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    int ans = recursive(num);
    printf("%d\n",ans);
    return 0;
}
