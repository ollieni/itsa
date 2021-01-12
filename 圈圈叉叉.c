#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        if(a[i][0]==a[i][1]&&a[i][1]==a[i][2])
        {
            printf("True\n");
            return 0;
        }
    }
    for(i=0;i<3;i++)
    {
        if(a[0][i]==a[1][i]&&a[1][i]==a[2][i])
        {
            printf("True\n");
            return 0;
        }
    }
    if(a[0][0]==a[1][1]&&a[1][1]==a[2][2])
    {
        printf("True\n");
        return 0;
    }
    if(a[0][2]==a[1][1]&&a[1][1]==a[2][0])
    {
        printf("True\n");
        return 0;
    }
    printf("False\n");
    return 0;
}
