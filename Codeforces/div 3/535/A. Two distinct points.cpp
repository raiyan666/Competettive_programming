#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        //cout<<min(a,b)<<" "<<max(c,d)<<'\n';
        if(a!=d)cout<<a<<' '<<d<<'\n';
        else if(a!=c)cout<<a<<' '<<c<<'\n';
        else if(b!=d)cout<<b<<' '<<d<<'\n';
        else cout<<b<<' '<<c<<'\n';
    }
}
