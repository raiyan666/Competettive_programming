#include <bits/stdc++.h>
#define ll              long long

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int modulo=1000000007;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    ll t,x=3,ans=1,mi=1;cin>>t;
    for(ll i=1;i<=t;i++){
        ans*=27;
        ans%=modulo;
        //cout<<ans<<'\n';
        mi*=7;
        mi%=modulo;
        //cout<<mi<<'\n';
    }
    ans=(ans-mi)%modulo;
    if(ans<0)ans+=modulo;
    cout<<ans<<'\n';
    return 0;
}
