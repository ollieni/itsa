/*¦¨ÁZ¥­§¡*/
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int g[num][3];
    int i,j;
    for(i=0;i<num;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    float a=0,b=0,c=0,sum=0;
    for(i=0;i<num;i++)
    {
        a = a + g[i][0];
    }
    for(i=0;i<num;i++)
    {
        b = b + g[i][1];
    }
    for(i=0;i<num;i++)
    {
        c = c + g[i][2];
    }
    printf("%.1f %.1f %.1f %.1f\n",(a+b+c)/(3*num),a/num,b/num,c/num);
    return 0;
}
