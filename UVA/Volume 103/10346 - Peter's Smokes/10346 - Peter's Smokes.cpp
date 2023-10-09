#include <bits/stdc++.h>
#define ll              long long

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    fast_in_out
    int n,k;
    while(cin>>n>>k)
    {
        int x,sum=n;
        while(1)
        {
            int x=n/k;
            sum+=x;
            if(x==0)break;
            n=x;
        }
        cout<<sum;nl;
    }
    return 0;
}
