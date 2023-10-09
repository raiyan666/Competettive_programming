#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    int t;cin>>t;
    while(t--){
        bool arr[52]={false};
        //for(int i=0;i<52;i++)arr[i]=false;
        int ans=0,n,x;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>x;
            if(x)arr[i]=1;
        }
        int start=0,en=0;
        bool st=false;
        for(int i=1;i<=n;i++){
            if(!st&&arr[i]){
                st=true;
                start=i;
                en=i;
            }
            else if(st&&arr[i]){
                en=i;
            }
        }
        for(int i=start;i<en;i++)if(!arr[i])ans++;
        cout<<ans<<'\n';
    }
    return 0;
}
