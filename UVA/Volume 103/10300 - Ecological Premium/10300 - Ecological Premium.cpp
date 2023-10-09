#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n,a,b,c,f;
    cin>>t;
    while(cin>>f){
        if(t){
           int sum=0;
            while(f--){
                cin>>a>>b>>c;
                sum+=(a*c);
            }
        cout<<sum<<'\n';
        t--;
        }
        else while(f--)cin>>a>>b>>c;
        
    }
    return 0;
}