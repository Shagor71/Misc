#include <stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);

    if(A>B){
        printf("%d", 2*A - 1);
    }
    else if(A==B)
        {
            printf("%d", A + B);
        }

    else{
        printf("%d", 2*B - 1);
    }

    return 0;
}
