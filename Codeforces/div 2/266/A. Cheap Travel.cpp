#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    int n,m,a,b,ans=1000000009,rem;
    cin>>n>>m>>a>>b;
    for(int i=0;i<=1000;i++){
        rem=n-i*m;
        if(rem<0)rem=0;
        ans=min(ans,(rem*a)+(i*b));
    }
    cout<<ans<<'\n';
    return 0;
}
