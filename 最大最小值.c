#include<stdio.h>
int main()
{
    float in[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%f",&in[i]);
    }
    float max=0,min=0;
    for(i=0;i<10;i++)
    {
        if(in[i]>max)
        {
            max=in[i];
        }
        if(in[i]<min)
        {
            min=in[i];
        }
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
    return 0;
}
