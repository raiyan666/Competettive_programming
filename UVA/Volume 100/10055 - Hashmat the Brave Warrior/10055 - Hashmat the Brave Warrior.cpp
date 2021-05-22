#include <bits/stdc++.h>
#define ll              long long

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    fast_in_out
    ll a,b;
    while((cin>>a>>b))
    {
        if(a-b>=0)cout<<a-b<<'\n';
        else cout<<b-a<<'\n';
    }
    return 0;
}
