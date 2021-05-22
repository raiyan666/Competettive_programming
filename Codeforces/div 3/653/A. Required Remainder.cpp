#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,n,i;
        scanf("%d%d%d",&x,&y,&n);
        int d=n/x;
        if((d*x)+y<=n)printf("%d\n",d*x+y);
        else printf("%d\n",(d-1)*x+y);

    }
    return 0;
}
