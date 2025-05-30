#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        int loop,sum=0;
        scanf("%d",&loop);
        while(loop--)
        {
            int n;
            scanf("%d",&n);
            if(n>=0)
            {
                sum+=n;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
