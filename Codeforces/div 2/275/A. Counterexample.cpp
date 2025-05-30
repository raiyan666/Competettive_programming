#include <bits/stdc++.h>
#define ll              long long

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    ll a,b;
    cin>>a>>b;
    if(a&1)a++;
    if(a+2<=b)
    cout<<a<<' '<<a+1<<' '<<a+2<<'\n';
    else cout<<"-1\n";
    return 0;
}
