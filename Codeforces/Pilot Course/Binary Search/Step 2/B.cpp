#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;
int n, k;
vector<int> space;

bool good(double x)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += floor(space[i] / x);
    }
    return sum >= k;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> k;
    space.resize(n);
    for (int i = 0; i < n; i++)
        cin >> space[i];
    double l = 0;   // good value
    double r = 1e8; // bad value
    for (int i = 0; i < 100; i++)
    {
        double m = (l + r) / 2;
        if (good(m))
        {
            l = m;
        }
        else
            r = m;
    }
    cout << setprecision(20)<<l << '\n';

    return 0;
}