#include<bits/stdc++.h>
#define ll long long 
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,sum=0;
        cin>>n>>m;
        vector<int>unh(n+1);
        for(int i=1;i<=n;i++){
            cin>>unc[i];
            sum+=unc[i];
        }
        vector<bool>vis(n+1,0);
        vector<int>minimu;
        int cnt=0;
        forn(m){
            int x,y;
            cin>>x>>y;
            // if(!vis[x])++cnt;
            // if(!vis[y])++cnt;
            vis[x]=1,vis[y]=1;
            minimu.push_back(unc[x]+unc[y]);
        }
        sort(minimu.begin(),minim.end());
        int minus=minimu.front();

    }
    return 0;
}