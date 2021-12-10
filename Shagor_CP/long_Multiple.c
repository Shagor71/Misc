#include <stdio.h>
int main()
{
    long long A,B;
    scanf("%lld %lld",&A,&B);

    if(B%A==0){
        printf("YES");
    }

    else
        printf("NO");

    return 0;
}
