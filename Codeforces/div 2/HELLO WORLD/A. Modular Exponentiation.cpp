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
ll two(ll m)
{
    ll ans=1;
    while(m--)
    {
        ans*=2;
    }
    return ans;
}

int main()
{
    ll n,m;
    cin>>n>>m;
    ll mod=two(n);
    //cout<<mod;nl;
    ll rem=m%mod;
    cout<<rem;nl;
    return 0;
}
