#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int a,b,c,d;
    char op;
    scanf("%d",&num);
    int i;
    for(i=0;i<num;i++)
    {
        scanf(" %c %d %d %d %d",&op,&a,&b,&c,&d);
        switch(op)
        {
            case '+':
                printf("%d %d\n",a+c,b+d);
                break;
            case '-':
                printf("%d %d\n",a-c,b-d);
                break;
            case '*':
                printf("%d %d\n",a*c - b*d,b*c + a*d);
                break;
            case '/':
                printf("%d %d\n",(a*c + b*d) / (c*c + d*d), b*c - a*d / (c*c + d*d));
        }
    }
    return 0;
}
