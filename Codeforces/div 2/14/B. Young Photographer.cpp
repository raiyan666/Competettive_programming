#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,lim1=-100000,lim2=100000;

    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b)swap(a,b);
        lim1=max(lim1,a);
        lim2=min(lim2,b);
    }
    if(lim1>lim2) printf("-1\n");
    else{
        if(m>=lim1&&m<=lim2)printf("0\n");
        else printf("%d\n",min(abs(lim1-m),abs(lim2-m)));
    }

    return 0;
}
