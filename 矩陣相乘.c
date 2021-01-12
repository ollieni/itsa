#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int m1[a][b];
    int i,j,k;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    int c,d;
    scanf("%d %d",&c,&d);
    int m2[c][d];
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    int m3[a][d];
    for(i=0;i<a;i++)
    {
        for(j=0;j<d;j++)
        {
            m3[i][j]=0;
            for(k=0;k<b;k++)
            {
                m3[i][j] = m3[i][j] + m1[i][k]*m2[k][j];
            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
