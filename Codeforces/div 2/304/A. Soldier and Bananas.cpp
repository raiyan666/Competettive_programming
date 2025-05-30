#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n,k,w,ans=0;
    cin>>k>>n>>w;
    for(int i=0;i<w;i++)
    {
        ans=ans+(i+1);
    }
    ans=ans*k;

    if(ans<n)
    {
        ans=0;
        cout<<ans<<'\n';
        return 0;
    }
    ans-=n;
    cout<<ans<<"\n";
    return 0;
}
