#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    int ans=a[0]+a[1];
    if(a[2]>=ans)
    {
        ans=a[2]-ans+1;
    }
    else
    {
        ans=0;
    }
    cout<<ans<<'\n';
    return 0;
}
