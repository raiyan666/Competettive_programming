#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    fast_in_out
    ll n;
    while(cin>>n)
    {
        if(n==0)break;
        ll x=0;
        string s=bitset<8>(n).to_string();
        for(int i=0;i<s.size();i++)
            if(s[i]=='1')x++;
        cout<<"The parity of "<<n<<" is "<<x<<" (mod 2).\n";
    }

    return 0;
}
