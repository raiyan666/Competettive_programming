#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, n, m;
        cin >> x >> n >> m;

        int min_x = x, max_x = x;

        // Calculate minimum
        int min_n = n, min_m = m;
        while (min_n-- && min_x > 0) min_x /= 2;
        while (min_m-- && min_x > 0) {
            min_x = (min_x + 1) / 2;
            if(min_x==1) break;
        }
        // Calculate maximum
        int max_n = n, max_m = m;
        while (max_m-- && max_x > 0) {
            max_x = (max_x + 1) / 2;
            if(max_x==1) break;
        }
        while (max_n-- && max_x > 0) max_x /= 2;

        cout << max_x << " " << min_x << '\n';
    }

    return 0;
}
