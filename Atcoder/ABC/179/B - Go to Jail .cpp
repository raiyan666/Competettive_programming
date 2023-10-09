#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    int pre=0,fin=0,t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==b){
            pre++;
            if(pre>=3)fin++;
        }
        else pre=0;
    }
    if(fin)cout<<"Yes";
    else cout<<"No";
    return 0;
}
