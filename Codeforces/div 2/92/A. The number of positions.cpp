#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    scanf("%d%d%d",&n,&a,&b);
    int x=0;
    for(int i=1;i<=n;i++)
        if(i>a&&(n-i)<=b)x++;
    printf("%d\n",x);
    return 0;
}
