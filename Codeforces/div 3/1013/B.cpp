#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);

    // Input the array
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array in descending order
    sort(arr.rbegin(), arr.rend());

    ll team_count = 0, members = 0;

    // Iterate through the array to form teams
    for (ll i = 0; i < n; i++) {
        members++; // Add the current student to the team
        if (members * arr[i] >= x) { // Check if the team's strength is sufficient
            team_count++; // Form a strong team
            members = 0; // Reset the counter for the next team
        }
    }

    return team_count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int ans = solve();
        cout << ans << '\n';
    }

    return 0;
}