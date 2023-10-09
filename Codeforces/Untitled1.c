#include <stdio.h>

int main()
{
    int n[]={105,3,7,15,5,60,91};
    int sum=0;
    for(int a=1;a<7;a++){
        if(n[a]%3==0){
            //MX=n[a];
            sum+=n[a];
            printf("[%d]>>",n[a]);
        }
    }
    printf("sum=%d\n",sum);

    return 0;
}

