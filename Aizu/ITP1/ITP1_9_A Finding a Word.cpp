#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    fast_in_out
    string s,t;
    int ap=0;
    cin>>s;
    while(cin>>t)
    {
        bool jabe=true;
        if(t=="END_OF_TEXT")break;
        int i;
        for(i=0;i<t.size();i++)
        {
            if(t[i]>='A'&&t[i]<='Z')t[i]=t[i]-'A'+'a';
        }
        if(s==t){
            ap++;
        //cout<<t<<'\n';
        }

    }
    cout<<ap<<'\n';
    return 0;
}
