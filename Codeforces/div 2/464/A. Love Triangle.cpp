
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back


#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
 //   bool vis[5003];
    vi arr;
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t,x;cin>>t;
    arr.pb(0);
    for(int i=1;i<=t;i++){
        cin>>x;
        arr.pb(x);
    }
    for(int i=1;i<=t;i++){
        if(arr[arr[arr[i]]]==i)
            {
                cout<<"YES\n";
                return 0;
            }
    }
    cout<<"NO\n";
    return 0;
}
