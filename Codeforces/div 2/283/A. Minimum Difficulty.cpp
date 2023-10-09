#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define vi              vector<int>
#define pb              push_back
using namespace std;

int main()
{
    int arr[103];
    fast_in_out
    int t,ans=10005,maxi;
    cin>>t;
    for(int i=1;i<=t;i++)cin>>arr[i];
    for(int i=2;i<t;i++){
        vi con;
        for(int j=1;j<=t;j++)if(j!=i)con.pb(arr[j]);
        maxi=0;
        for(int j=0;j<con.size()-1;j++)
                maxi=max(maxi,con[j+1]-con[j]);
        ans=min(maxi,ans);
    }
    cout<<ans<<'\n';
    return 0;
}
