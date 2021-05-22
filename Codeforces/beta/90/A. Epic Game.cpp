#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{

    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    int a,b,i,n,st=0;
    cin>>a>>b>>n;

    while(n>=0){
        if(i%2==0)n-=__gcd(a,n);
        else n-=__gcd(b,n);
        i++;
        st++;
    }
    //cout<<st<<'\n';
    if(st%2==0)cout<<"0\n";
    else cout<<"1\n";
    return 0;
}
