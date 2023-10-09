#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              insert

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    ll n;
    cin>>n;
    set<ll>con;
    ll lim=sqrt(n)+1;
    for(ll i=1;i<=lim;i++){
        if(n%i==0){
            con.pb(i);
            con.pb(n/i);
        }
    }
    //sort(con.begin(),con.end());
    for(auto it=con.begin();it!=con.end();it++)cout<<*it<<'\n';
    return 0;
}
