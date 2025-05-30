#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<vector<int>>A(n);
    while(q--)
    {
        int fun,t,x;
        cin>>fun;
        if(fun==0)//push_back
        {
            cin>>t>>x;
            A[t].push_back(x);

        }
        else if(fun==1)//dump
        {
            cin>>t;
            vector<int>::iterator it;
            for(it=A[t].begin();it!=A[t].end();++it)
            {
                cout<<*it;
                if(it!=(A[t].begin()+(A[t].size()-1)))
                    cout<<" ";
            }
            cout<<'\n';
        }
        else if(fun==2)
        {
            cin>>t;
            if(A[t].size()>0)
            {
                A[t].clear();
            }
        }
    }
    return 0;
}
