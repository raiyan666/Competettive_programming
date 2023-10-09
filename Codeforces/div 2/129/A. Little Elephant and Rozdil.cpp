#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int minimum=1000000000,pos=0,x,ans=0,t;

    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x;
        if(x<=minimum)
        {
            if(minimum!=x)ans=0;
            ans++;
            pos=i;
            minimum=x;
        }
    }
    if(ans==1)cout<<pos<<'\n';

    else cout<<"Still Rozdil\n";
    return 0;
}
