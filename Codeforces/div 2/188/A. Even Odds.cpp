#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;

    if(k<=(n+1)/2)cout<<(2*k)-1<<'\n';
    else{
        k-=(n+1)/2;
        cout<<2*k<<'\n';
    }

    return 0;
}
