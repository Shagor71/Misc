#include <stdio.h>
int main()
{
    double X,a;
    int p;
    scanf("%lf",&X);

    a = X - (int)X;

    if( a >= 0.5){
        p = X+1;
    }
    else{
        p = X;
    }

     printf("\n %d\n", p);

    return 0;
}
