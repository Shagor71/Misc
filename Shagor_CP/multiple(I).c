#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    float x = a/c,y = b/c;

    if(a==c || b==c){
        printf("%d",c);
    }

    else if(y - x >= 1){
                int  n = x  + 1;

                 printf("%d\n",n*c);
              }
              else{
                printf("-1\n");
              }


    return 0;
}
