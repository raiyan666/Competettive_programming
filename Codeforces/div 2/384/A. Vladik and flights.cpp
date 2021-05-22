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
    //fast_in_out
    vi con;
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t
    int n,a,b,i;
    string s;
    cin>>n>>a>>b;
    cin.ignore();
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]==s[b-1]){
            con.pb(i+1);
        }
    }
    for(int i=0;i<con.size();i++){
        if(i>=b)break;
    }
    int ans=min(abs(a-con[i-1]),abs(con[i]-a));
    cout<<ans<<'\n';
    return 0;
}
