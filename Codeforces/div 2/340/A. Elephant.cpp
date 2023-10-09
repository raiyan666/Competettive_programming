#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    if(n%5){
    ans=(n/5)+1;
    cout<<ans<<"\n";
    return 0;
    }
    ans=n/5;
    cout<<ans<<"\n";
    return 0;
}
