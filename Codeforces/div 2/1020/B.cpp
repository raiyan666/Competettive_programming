#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvpi vector<vector<pair<int,int>>>
#define ll long long
#define mp make_pair
#define pb push_back

void solve() {
    // Your solution code here
    vector<int>arr;
    int n,x;
    cin>>n>>x;
    // int cunt=n;
    for(int i=0;i<n;i++){
        if(i!=x)arr.pb(i);
    }
    arr.pb(x);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
    return;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}