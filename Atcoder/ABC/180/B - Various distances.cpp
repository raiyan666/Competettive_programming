#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<ll>
#define pb              push_back

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    vi con;
    int t;
    ll x;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x;
        con.pb(abs(x));
    }
    ll cheb=*max_element(con.begin(),con.end());
    ll euclid=0;

    for(int i=0;i<(int)(con.size());i++)euclid+=(con[i]*con[i]);
    ll man=0;
    for(int i=0;i<(int)(con.size());i++)man+=con[i];
    cout<<man<<'\n';
    cout<<fixed<<setprecision(15)<<sqrt(euclid)<<'\n';
    cout<<cheb<<'\n';
    return 0;
}
