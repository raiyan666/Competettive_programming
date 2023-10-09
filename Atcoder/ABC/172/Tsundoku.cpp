#include <bits/stdc++.h>

using namespace std;
queue<int>A,B;
int main()
{
    //fast_in_out
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push(x);
    }
    int book=0;
    while(k>=0)
    {
        int minimum=0;
        if(A.empty()&&B.empty())break;
        if(!A.empty()&&!B.empty())
        minimum=min(A.front(),B.front());
        else {
            if(B.empty())minimum=A.front();
            else if(A.empty())minimum=B.front();
        }
        printf("minimum=%d\t");
        k-=minimum;
        printf("minimum=%d k=%d\t",minimum,k);
        if(k>=0)
        {
            book++;
            if(minimum==A.front())A.pop();
            else if(minimum==B.front())B.pop();
        }
    }
    cout<<book<<'\n';
    return 0;
}
