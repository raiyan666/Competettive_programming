#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int home[101],away[101];
int main()
{
    fast_in_out
    int n,a,h,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>h>>a;
        home[h]++;
        away[a]++;
    }
    for(int i=1;i<=100;i++)ans+=(home[i]*away[i]);
    cout<<ans<<'\n';
    return 0;
}
