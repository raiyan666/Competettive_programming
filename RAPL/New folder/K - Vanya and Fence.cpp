#include <iostream>
using namespace std;
int main()
{
    int n,h,a[1001],width=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h)
        {
            width++;
        }
    }
    width+=n;
    cout<<width<<'\n';
    return 0;
}
