#include <bits/stdc++.h>
#define ll long long
#define nl cout << endl;
#define forn(n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr(200005);
        arr[0] = 1, arr[1] = 3;
        for (int i = 2; i < 200005; i++)
        {
            arr[i] = arr[i - 1] + 2;
        }
    int t;
    cin >> t;
    while (t--)
    {
        int n, cur = 1;
        cin >> n;
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";      
        cout<<'\n';
    }
    return 0;
}