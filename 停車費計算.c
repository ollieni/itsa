#include<stdio.h>
#include<stdlib.h>
int main()
{
    int inh,inm,outh,outm;
    scanf("%d %d",&inh,&inm);
    scanf("%d %d",&outh,&outm);
    int time = (outh*60 + outm) - (inh*60 + inm);
    if(time<120)
    {
        printf("%d\n",(time/30)*30);
    }
    else if(time>120&&time<240)
    {
        printf("%d\n",((time-120)/30)*40 +120);
    }
    else if(time>240)
    {
        printf("%d\n",((time-240)/30)*60+280);
    }
    return 0;
}
