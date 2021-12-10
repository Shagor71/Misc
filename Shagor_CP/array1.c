
#include <stdio.h>
int main()
{
    long long a, u, i=0, j=1, m;
    int b;

    printf("The number of terms = ");
    scanf("%lld", &m);

    printf("Fibonaci series is:\n1. %d\n",i);

    for(a=2,b=2; a,b<=m; a++,b++){
            u = i + j;
        printf("%d. %lld\n",b, u);
          j = i;
          i = u;
    }


    return 0;
}
