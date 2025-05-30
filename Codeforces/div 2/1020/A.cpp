#include <bits/stdc++.h>
using namespace std;

#define vc vector<char>
#define vvpi vector<vector<pair<int,int>>>
#define ll long long
#define mp make_pair
#define pb push_back

void solve() {
    // Your solution code here
    int n;
    cin>>n;
    vc con(n);
    for(int i=0;i<n;i++)cin>>con[i];
    int sum=0;
    for(int i=0;i<n;i++){
        if(con[i]=='1')sum++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(con[i]=='1'){
            ans+=(sum-1);
        }
        else{
            ans+=(sum+1);
        }
    }
    cout<<ans<<'\n';
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