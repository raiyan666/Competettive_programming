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
    //fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    ll n,goal;
    ll arr[25];
    cin>>n>>goal;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int pos=0;pos<n;pos++)
    {
        for(int dif=1;dif<=n;dif++)
        ll x=0;
        for(int i=pos;i<n;i+=dif){
            x&=(arr[i])
        }
    }
    return 0;
}
