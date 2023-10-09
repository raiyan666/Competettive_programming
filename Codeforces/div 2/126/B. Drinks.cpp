#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    double n;
    double x,sum;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        sum+=x;
    }
    //cout. precision(12);
    cout<<setprecision(12)<<fixed<<sum/n<<'\n';
    return 0;
}
