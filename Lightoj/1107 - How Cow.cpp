#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int x1,y1,x2,y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        int r;
        scanf("%d",&r);
        int p,q;
        printf("Case %d:\n",i);
        for(int j=0;j<r;j++)
        {
            scanf("%d%d",&p,&q);
            bool s=false,t=false;
            if(x2>x1)
                if(p>=x1&&p<=x2)s=true;
            else if(x1>x2)
                if(p>=x2&&p<=x1)s=true;
            if(y2>y1)
                if(q<=y2&&q>=y1)t=true;
            else if(y2<y1)
                if(q>=y2&&q<=y1)t=true;
            if(s&t)printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
