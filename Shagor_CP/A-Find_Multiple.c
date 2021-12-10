#include <stdio.h>
int main()
{
    int i,m,n,o;
    scanf("%d %d %d",&m,&n,&o);

    for(i=m; i<=n; i++){
        if(i%o==0){
            printf("%d\n", i);
            break;
          }
       }
          if (n < o || n-m<o){
                if(i%o!=0)
                {
                   printf("-1");
                }
                else
                    return 0;
        }
}
