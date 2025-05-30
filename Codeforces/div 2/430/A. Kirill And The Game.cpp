#include <bits/stdc++.h>
#define ll              long long
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    ll  l, r, x, y, k ;
    cin>> l>> r>> x>> y>> k ;
    for(ll i=x;i<=y;i++){
        if(k*i<=r&&k*i>=l){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
