#include <bits/stdc++.h>
#define ll              long long
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans=max(a*c,a*d);
    ans=max(ans,b*c);
    ans=max(ans,b*d);
    cout<<ans;
    return 0;
}
