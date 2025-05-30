#include<bits/stdc++.h>
#define ll long long 
#define nl cout<<'\n';
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    // cin>>t;
    // while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int sum=y+z,div;
        if(sum!=0){
            div=x/sum;
            if(x%sum<z)div--;
        }
        if(sum==0)div=0;
        
        cout<<div;
        nl;
    //}
    return 0;
}