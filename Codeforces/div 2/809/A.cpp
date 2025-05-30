#include<bits/stdc++.h>
#define ll long long 
#define forn(n) for(int i=1;i<=n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int m,n,minim=9999999,maxim=0;
        cin>>n>>m;
        vector<int>vi(n+1,0),flag(m+1,0);
        forn(n)cin>>vi[i];
        forn(n){
            int a=vi[i];
            int b=m+1-vi[i];
            if(b>m)b=a;
            minim=min(a,b);
            maxim=max(a,b);
            if(flag[minim]==0){
               
                flag[minim]++;
                // cout<<minim;
            }
            else {
                flag[maxim]++;
                //cout<<maxim;
            }
            //else continue;
            
            
        }
        forn(m){
            //cout<<vi[i]<<'\t';
             if(flag[i]>0)cout<<"A";
             else cout<<"B";
        }
        cout<<"\n";
    }
    return 0;
}