#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n, k;
    cin >> n >> k;
    vi a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int maxim= 0,one=0;
    unordered_set<int> possible_x;
    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            possible_x.insert(a[i] + b[i]);
            one++;
        }
        // maxim_a=max(maxim_a,a[i]);
        maxim=max(maxim,a[i] + b[i]);
    }

    if (possible_x.size() > 1) {
        cout << 0 << '\n';
        return;
    }
    for(auto it = possible_x.begin(); it != possible_x.end(); it++){
        if((*it) >maxim-k){
            cout << 0 << '\n';
            return;
        }
    }
    cout<<one<<'\n';
    
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