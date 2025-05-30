#include<bits/stdc++.h>
#define ll long long 
#define nl cout<<nl;
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //freopen("The Great Revegetation.in","r",stdin);
    //freopen("The Great Revegetation.out","w",stdout);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>pasture(n);
    int a,b;
    for(int i=0;i<m;++i){
        cin>>a>>b;
        pasture[a-1].push_back(b-1);
        pasture[b-1].push_back(a-1);
    }
    return 0;
}