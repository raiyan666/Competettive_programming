#include <iostream>
using namespace std;
int main()
{
    int n,a,b,ans=0;
    cin>>n>>a>>b;
    for(int i=a;i<n;i++)
    {
        if((n-i-1)<=b)
        {
            ans++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}
