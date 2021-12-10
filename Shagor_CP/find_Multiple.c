#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(a%c==0)
    {
        printf("%d", a);
    }
    else if (b%c==0)
    {
        printf("%d", b);
    }
    else
    {
        d = a/c;

        int e = c*(d+1);
        if(e<b)
        {
            printf("%d", e);
        }
        else
            {
                printf("-1");
            }
    }
    return 0;
}
