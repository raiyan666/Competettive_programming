#include <bits/stdc++.h> 
#define ll long long 
#define nl cout<<endl;
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        bool exist=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k)exist=true;
        }
        if(exist)cout<<"YES\n";
        else cout<<"NO\n";
        

    }
    return 0;
}