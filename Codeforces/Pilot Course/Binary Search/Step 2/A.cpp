#include <iostream>
#define ll long long

using namespace std;
ll w, h, n;

bool good(ll x)
{
    return (x / w) * (x / h) >= n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int w,h,n;
    cin >> w >> h >> n;
    // ll m;
    ll l = 0; // bad number;
    ll r = 1; // good number
    while (!good(r))
        r *= 2;

    while (r > l + 1)
    {
        ll m = (r + l) / 2;
        if (good(m))
            r = m;
        else
            l = m;
    }
    cout << r << '\n';
    return 0;
}