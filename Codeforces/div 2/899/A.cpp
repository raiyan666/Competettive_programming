#include <bits/stdc++.h>
#define ll long long
#define nl cout << endl;
#define forn(n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, start = 0, end = 0;
        bool mitthe = false, sequence = true;
        cin >> n;
        int arr[105];
        arr[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] != i && !mitthe)
            {
                start = i;
                mitthe = true;
                if(start!=1&&arr[1]!=1)start=1;
            }
            if (sequence)
            {
                if (arr[i] > arr[i - 1])
                {
                    sequence = false;
                }
            }
            cout << i << "->" << arr[i] << ' ' << start << '\n';
        }

        if (arr[1] == 1)
        {
            if (sequence)
            {
                cout << "1_sequence->";
                cout << n + n << '\n';
            }
            else
            {
                cout << "1_not_sequence->";
                if (arr[n] != n)
                {
                    cout << start + n << '\n';
                }
                else
                {
                    cout << n + 1 << '\n';
                }
            }
        }
        else
        {
            cout << 'not_1->';
            if (arr[n] != n)
            {
                // cout<<'sequence->';
                cout << n << '\n';
            }
            else
            {
                cout << n + 1 << '\n';
            }
        }
        // cout << end << '\n';
    }
    return 0;
}