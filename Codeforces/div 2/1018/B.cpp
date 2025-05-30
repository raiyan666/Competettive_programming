#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    // Your solution code here
    int n,k;
    cin>>n>>k;
    vector<int>l(n,0),r(n,0);
    for(int i=0;i<n;i++)cin>>l[i];
    for(int i=0;i<n;i++)cin>>r[i];
    vector<int>a(n,0),b(n,0);
    ll y=0;
    for(int i=0;i<n;i++){
        a[i]=max(l[i],r[i]);
        b[i]=min(l[i],r[i]);
        y+=a[i];
    }
    sort(b.begin(),b.end(),greater<>());
    for(int i=0;i<k-1;i++) y+=b[i];
    
    cout<<y+1<<'\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}