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
    double pi=3.14159265359;
    int t;
    cin>>t;
    while(t--)
    {
        double l;
        cin>>l;
        double w=(3.00/5.00);
        double r=(1/5.00);
        w*=l;
        r*=l;
        double red=pi*r*r;
        double green=l*w;
        green-=red;
        cout<<fixed<<setprecision(2)<<red<<" "<<fixed<<setprecision(2)<<green<<'\n';
    }
    return 0;
}
