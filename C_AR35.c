/*¥Í¨v*/
#include <stdio.h>
#define ROW 12
#define COL 10
int count (int x)
{
    if(x<=2008&&(2008-x)%12==0)
        return 0;
    else if(x>2008)
        return (x-2008)%12;
    else
        return 12-(2008-x)%12;
}

int main()
{
    char a[12][10]= {"rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog","pig"};
    int num,i=0,temp=1;
    scanf("%d",&num);
    while(temp==1)
    {
        if(a[count(num)][i]=='\0')
        {
            temp=0;
        }

        else
        {
            printf("%c",a[count(num)][i]);
            i++;
        }

    }
    printf("\n");

    return 0;
}
