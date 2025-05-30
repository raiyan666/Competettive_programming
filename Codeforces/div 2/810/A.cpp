#include<bits/stdc++.h>
#define ll long long 
#define nl cout<<nl;
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        int cnt=0;
        if(n%2){
            cout<<n;
            cnt++;
            int i;
            if(n!=1)i=1;
            while(cnt<n){
                cout<<" "<<i;
                ++cnt;
                ++i;
            }
            cout<<"\n";
        }
        else{
            for(int i=1;i<=n;i++){
                if(i%2)cout<<i+1<<" ";
                else cout<<i-1<<" ";
            }
            cout<<"\n";

        }
    }
    return 0;
}