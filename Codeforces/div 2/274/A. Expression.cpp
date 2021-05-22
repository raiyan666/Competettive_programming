#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    int a,b,c,maxi=0;
    cin>>a>>b>>c;
    maxi=max(maxi,(a+b*c));
    maxi=max(maxi,(a*(b+c)));
    maxi=max(maxi,a*b*c);
    maxi=max(maxi,(a+b)*c);
    maxi=max(maxi,(a*b+c));
    maxi=max(maxi,(a+b+c));
    cout<<maxi<<'\n';
    return 0;
}
