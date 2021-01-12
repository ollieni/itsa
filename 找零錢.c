#include<stdio.h>
void greedy(int n)
{
   int i;
   int m[3]={50,5,1};
   int change[3]={0};
   for(i=0;i<3;i++)
   {
      while(n>=m[i] && n>0)
      {
          change[i]++;
          n = n-m[i];
      }
   }
   for(i=2;i>=0;i--)
   {
       printf("%d",change[i]);
       if(i!=0)
       {
           printf(",");
       }
   }
   printf("\n");

}
int main()
{
    int n,a1,a2,a3;
    scanf("%d,%d,%d,%d",&n,&a1,&a2,&a3);
    if(n-a1*15-a2*20-a3*30 <=0)
    {
        printf("%d\n",0);
    }

    else
    {
        int least = n-a1*15-a2*20-a3*30;
        greedy(least);
    }

    return 0;

}
