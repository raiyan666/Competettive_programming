#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
    fast_in_out
    bool vis[30004];
    int  arr[30004];
    int n,des,x;cin>>n>>des;
    for(int i=0;i<=n;i++)vis[i]=false;
    for(int i=1;i<n;i++) cin>>arr[i];
    int cur=1;
    while(cur<n){
        cur=cur+arr[cur];
        vis[cur]=true;
    }
    if(vis[des])cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
