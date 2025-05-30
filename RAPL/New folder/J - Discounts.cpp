#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ull long long int
int main()
{
    vector <ull> price;
    vector <ull> cost;
    ull n,m,sum=0;
    cin>>n;
    for(ull i=0;i<n;i++)
    {
        ull inp;
        cin>>inp;
        sum+=inp;
        price.push_back(inp);
    }
    sort(price.begin(),price.end());
    cin>>m;
    ull coupon;
    for(ull i=0;i<m;i++)
    {
        cin>>coupon;
        ull ans=sum-price.at(n-coupon);
        cout<<ans<<"\n";
    }
    return 0;
}
