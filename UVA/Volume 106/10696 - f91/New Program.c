#include <stdio.h>
int f91(int x){
    if(x>=101)return x-10;
    else return f91(f91(x+11));
}
int main(){
    int a;
    while(scanf("%d",&a)&&a){
        printf("f91(%d) =  %d\n",a,f91(a));
    }
    return 0;
}
