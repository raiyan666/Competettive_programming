#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    int m,n;
    cin>>m>>n;
    int x=min(m,n);
    if(x%2)cout<<"Akshat\n";
    else cout<<"Malvika\n";
    return 0;
}
