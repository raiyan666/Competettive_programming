#include <bits/stdc++.h> 
#define ll long long 
#define nl cout<<endl;
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    vector<ll>arr(2e5+5);
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        //for(ll i=0;i<n;i++)cin>>arr[i];
        ll min_sum=(k*(k+1))/2;
        ll max_sum=((n*(n+1))-(n-k)*(n-k+1))/2;
        if(x>max_sum ||x<min_sum)cout<<"NO\n";
        else cout<<"Yes\n";

    }
    return 0;
}