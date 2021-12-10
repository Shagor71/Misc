#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);

    if(m>=0 && m <=9){
        printf("000%d\n",m);
    }
    else if(m>=10 && m <=99){
        printf("00%d\n",m);
    }
    else if(m>=100 && m <=999){
        printf("0%d\n",m);
    }
    else if(m>=1000 && m <=9999){
        printf("%d\n",m);
    }


    return 0;

}
