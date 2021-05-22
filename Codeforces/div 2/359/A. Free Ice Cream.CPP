#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    ll n,sum,x,ans=0;
    cin>>n>>sum;
    cin.ignore();
    char c;
    for(int i=1;i<=n;i++){
        cin>>c;
        cin>>x;
        cin.ignore();
        if(c=='+')sum+=x;
        else if(c=='-') {
            if(sum<x){
                ans++;
                continue;
            }
            else sum-=x;
        }
        //cout<<sum<<'\n';
    }
    cout<<sum<<' '<<ans<<'\n';
    return 0;
}
