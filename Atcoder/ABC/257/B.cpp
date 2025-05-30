#include<bits/stdc++.h>
#define ll long long 
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //int t;

    //cin>>t;
    //while(t--){
        int n,q,k,a;
        cin>>n>>k>>q;
        //vector<bool> vec(n+2,0),done(n,0);
        vector<int>vi(k);

        forn(k){
            cin>>vi[i];
            
            //vec[v[i]]=1;
        }
        //cout<<"ber hoise\n";
        //i=0;
        sort(vi.begin(),vi.end());
        forn(q){
            cin>>a;
            if(vi[a-1]+1!=vi[a]&&a<n &&vi[a-1]<n)vi[a-1]++;
        }
        forn(k)if(vi[i])cout<<vi[i]<<" ";
    //}
    return 0;
}