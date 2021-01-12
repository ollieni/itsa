
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char a[80];
    scanf("%s",&a);
    int size = 0 ;
    int ans = 1;
    int i ;
    for(i=0; i<80; i++)
    {
        if(a[i]=='\0')
            break;
        size++;
    }
    for(i=0; i<size/2; i++)
    {
        if(a[i] != a[size-1-i])
        {
            printf("NO\n");
            ans =0;
            break;
        }
    }
    if(ans==1)
        printf("YES\n");

    return 0;
}
