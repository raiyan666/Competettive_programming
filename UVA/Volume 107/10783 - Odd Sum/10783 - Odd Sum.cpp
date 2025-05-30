#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    fast_in_out
    int t,a,b;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int sum=0;
        cin>>a>>b;
        if(a>b)swap(a,b);
        int i=a;
        if(a%2==0)i++;
        for(i;i<=b;i+=2)sum+=i;
        cout<<"Case "<<j<<": "<<sum<<'\n';
    }
    return 0;
}
