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
    int t, lz=0, lo=0, rz=0, ro=0;
    char a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a=='0')lz++;
        else lo++;
        if(b=='0')rz++;
        else ro++;
    }
    cout<<min(lz,lo)+min(rz,ro);
    nl;
    return 0;
}
