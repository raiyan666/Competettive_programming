#include <iostream>
#include <queue>

using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<queue<int>>A(n);
    while(q--)
    {
        int act,t,x;
        cin>>act;
        if(act==0)
        {
            cin>>t>>x;
            A[t].push(x);
        }
        else if(act==1)
        {
            cin>>t;
            if(A[t].size()>0)
            {
                cout<<A[t].front()<<'\n';
            }
        }
        else{
            cin>>t;
            if(!A[t].empty())
            {
                A[t].pop();
            }
        }
    }
    return 0;
}
