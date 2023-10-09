#include <bits/stdc++.h>
#define ll long long
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    int t;cin>>t;
    while(t--){
        ll ans=0,a,b,c,d;
        cin>>a>> b>> c>> d;
        if(abs(d-b)==0)ans=abs(a-c);
        else if(abs(a-c)==0)ans=abs(b-d);
        else{
            ans+=2;
            ans+=abs(a-c);
            ans+=abs(b-d);
        }

        cout<<ans<<'\n';
    }
    return 0;
}
