#include <bits/stdc++.h>
#define ll long long 
#define nl cout<<endl;
#define forn(n) for(int i=0;i<n;i++)
#define forb(n) for(int i=1;i<=n;i++)
using namespace std;
int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum[200005];
        sum[0]=0;
        string c;
        cin>>c;
        int proc=0;
        forn(n){
            
            if(c[i]=='B' ) {
                i+=(k-1);
                proc++;
            }
           
        }
        cout<<proc<<'\n';
    }
    return 0;
}