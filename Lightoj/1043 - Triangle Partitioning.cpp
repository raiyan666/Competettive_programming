#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    fast_in_out
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double AD,AB, AC, BC,ret;
        cin>>AB>> AC>> BC>>ret;
        ret=(1/ret);
        ret+=1.00;
        ret=sqrt(ret);
        AD=AB/ret;
        cout<<fixed<<setprecision(8)<<"Case "<<i<<": "<<AD<<'\n';
    }
    return 0;
}
