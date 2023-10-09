#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;
    vi arr;
    bool cholbe =true;
    while(cin>>t){
        if(cholbe){
            if(t==42){
                cholbe=false;
                continue;
            }
            arr.pb(t);
        }
    }
    //sort(arr.begin(),arr.end());
    for(auto it=arr.begin();it!=arr.end();it++)cout<<*it<<'\n';
    return 0;
}
