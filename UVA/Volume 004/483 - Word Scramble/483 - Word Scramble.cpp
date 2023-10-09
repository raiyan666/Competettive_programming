#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    string s,r;
    while(getline(cin,s))
    {
        int j=0;
        stringstream ss(s);
        while(ss>>r){
            while(s[j]==' ')
            {
                cout<<' ';
                j++;
            }
            for(int i=r.size()-1;i>=0;i--){
                cout<<r[i];
                j++;
            }
        }
        cout<<'\n';
    }
    return 0;
}
