#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    map<string,int>M;
    while(q--)
    {
        int cmd;
        string key;
        cin>>cmd>>key;
        if(cmd==0)
        {
            cin>>M[key];
        }
        else if(cmd==1)
        {
                if(M.find(key)!=M.end())
                {
                    cout<<M.find(key)->second<<'\n';
                }
                else{

                    cout<<"0\n";
                }
        }
        else if(cmd==2)
        {
            if(M.find(key)!=M.end())
            {
                M.erase(M.find(key));
            }
        }
    }
    return 0;
}

