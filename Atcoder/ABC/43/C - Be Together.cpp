#include <bits/stdc++.h>
#define ll              long long

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int arr[103];
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t,avg=0,a=0,b=0,c=0;cin>>t;
    for(int i=0;i<t;i++){
        cin>>arr[i];
        avg+=arr[i];
    }
    ll x=avg/t;
    ll y=x+1;
    ll z=x-1;
    for(int i=0;i<t;i++){
        a+=((arr[i]-x)*(arr[i]-x));
        b+=((arr[i]-y)*(arr[i]-y));
        c+=((arr[i]-z)*(arr[i]-z));
    }
    a=min(a,b);
    a=min(a,c);
    cout<<a<<'\n';
    return 0;
}
