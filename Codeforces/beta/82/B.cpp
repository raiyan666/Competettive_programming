#include <bits/stdc++.h>
using namespace std;
int a[101],b[101],c[101],d[101];
int main()
{
    int n,rem=1000000,cur=-1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]>>b[i]>>c[i]>>d[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool x=true;
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j] && b[i] < b[j] && c[i] < c[j] )
            {
                x=false;
            }
            
        }
        if(x){
            if(d[cur]>d[i]||cur==-1){
                cur=i;
            }
        }
        //cout<<"done"<<i<<'\n';
    }
    cout<<cur+1<<'\n';

    return 0;
}