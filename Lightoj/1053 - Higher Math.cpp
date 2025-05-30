#include <iostream>

#include <algorithm>
using namespace std;
#define ll long long
int main()
{
    int t;
    scanf("%d",&t);
    for(ll i=1;i<=t;i++)
    {
        ll a[3];
        ll l=3;
        for(ll i=0;i<l;i++)
        {
            cin>>a[i];
        }
        int n=sizeof(a)/sizeof(a[0]);
        sort(a,a+n);
        ll y=a[0]*a[0];

        ll x=a[1]*a[1];
        ll z=a[2]*a[2];
        if(z-(x+y)==0)
        {
            cout<<"Case "<<i<<": yes\n";
        }
        else{
            cout<<"Case "<<i<<": no\n";
        }
    }
    return 0;
}
