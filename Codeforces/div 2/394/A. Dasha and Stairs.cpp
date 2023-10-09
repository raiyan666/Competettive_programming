#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a!=0||b!=0){
    if(abs(a-b)==1||a==b)printf("YES\n");
    else printf("NO\n");
    return 0;
    }
    else printf("NO\n");
    return 0;
}
