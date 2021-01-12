#include<stdio.h>
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int in[row][column];
    int out[column][row];
    int i,j;
    int count=0;
    for(i=0;i<row;i++)
    {
       for(j=0;j<column;j++)
       {
           scanf("%d",&in[i][j]);
       }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            out[j][i] = in[i][j];
        }
    }
    for(i=0;i<column;i++)
    {
       for(j=0;j<row;j++)
       {
           count++;
           printf("%d",out[i][j]);
           if(count%row!=0)
           {
               printf(" ");
           }
       }
        printf("\n");
    }
    return 0;
}
