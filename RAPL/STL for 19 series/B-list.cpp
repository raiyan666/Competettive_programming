#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    list <ll> list1;
    list<ll>:: iterator it=list1.end();
    list<ll>:: iterator mt=list1.end();
    ll query;
    cin>>query;

    for(ll i=0;i<query;i++)
    {
        ll cmd;
        cin>>cmd;
        if(cmd==0)
        {
            ll x;
            cin>>x;
            list1.insert(it,x);
            advance(it,-1);
        }
        else if(cmd==1)
        {
                ll x;
                cin>>x;
                advance(it,x);
        }
        else if(cmd==2){
                mt=it;

            advance(it,1);
            list1.erase(mt);
        }
    }

    for(it=list1.begin();it!=list1.end();it++)
    {
        cout<<*it<<'\n';
    }
    return 0;
}
