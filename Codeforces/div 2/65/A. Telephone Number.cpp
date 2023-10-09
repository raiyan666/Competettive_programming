#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        string s;
        cin>>x>>s;
        if(s[0]=='8'){
            cout<<"YES\n";
            continue;
        }
        bool v=false;
        for(int i=0;i<x-11;i++)
        if(s[i]=='8'){
            v=true;

            break;
        }
        if(v)cout<<"YES\n";
        else
        cout<<"NO\n";
    }

    return 0;
}
