#include<stdio.h>
int main()
{
    float r;
    int n,p;
    scanf("%f %d %d",&r,&n,&p);
    int i;
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=(sum+p)*(1+r);
    }
    int ans = sum;
    printf("%d\n",ans);
    return 0;
}
