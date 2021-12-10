#include<stdio.h>
int main()
{
    int m,a,n;
    scanf("%d",&a);

    for( n=1; n<=a; n++){
        for(m=1; m<=n; m++)
                  printf("*");
                printf("0\n");

    }


    return 0;
}
