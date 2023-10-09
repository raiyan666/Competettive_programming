#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;
    int shot=(k*l);
    shot/=nl;
    int lime=c*d;
    int salt=p/np;
    int ans=min(shot,lime);
    ans=min(ans,salt);
    ans/=n;
    printf("%d\n",ans);
    return 0;
}
