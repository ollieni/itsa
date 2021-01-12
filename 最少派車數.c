#include<stdio.h>
int main()
{
    int num;
    int overlap[24]={0};
    scanf("%d",&num);
    int s,d;
    int i;
    for(i=0;i<num;i++)
    {
        scanf("%d %d",&s,&d);
        int j;
        for(j=s-1;j<d-1;j++)
        {
            overlap[j]++;
        }
    }
    int ans=0;
    for(i=0;i<24;i++)
    {
        if(ans<overlap[i])
           {
               ans=overlap[i];
           }
    }
    printf("%d\n",ans);
    return 0;
}
