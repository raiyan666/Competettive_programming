#include <bits/stdc++.h>
#define ll      long long

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
ll three[99],five[99];
int main()
{
    fast_in_out
    ll n;
    cin>>n;
    three[0]=1,five[0]=1;

    for(int i=1 ;i<99;i++){
        three[i]=three[i-1]*3;
        five[i]=five[i-1]*5;
    }

    for(int i=0;i<99;i++){
        for(int j=0;three[i]+five[j]<=n;j++){
            if(three[i]+five[j]==n){
                cout<<i<<' '<<j<<'\n';
                return 0;
            }
        }
    }
    cout<<"-1\n";
    return 0;
}
