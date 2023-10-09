#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    vi R,G,B;
    int r,g,b,x;
    cin>>r>>g>>b;
    while(r--){
        cin>>x;
        R.pb(x);
    }
    sort(R.begin(),R.end());
    while(g--){
        cin>>x;
        G.pb(x);
    }
    sort(G.begin(),G.end());
    while(b--){
        cin>>x;
        B.pb(x);
    }
    sort(B.begin(),B.end());
    ll ans=0,area;
    while(1){
        if((B.empty()&&R.empty())||(R.empty()&&G.empty())||(G.empty()&&B.empty()))break;

    }
    cout<<ans<<'\n';
    return 0;
}
