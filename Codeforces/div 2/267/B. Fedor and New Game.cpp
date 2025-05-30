#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

int main()
{
    int arr[1003];
    fast_in_out
    int n,m,k,sum=0;
    cin>>n>>m>>k;
    for(int i=0;i<=m;i++)cin>>arr[i];
    //bitset<20>mth(arr[m]);
    for(int i=0;i<m;i++){
        if(__builtin_popcount(arr[i]^arr[m])<=k)
        sum++;
    }
    cout<<sum<<'\n';
    return 0;
}
