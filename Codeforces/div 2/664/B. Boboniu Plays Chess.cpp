#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

int main()
{
    fast_in_out
    int row,col,x,y;
    cin>>row>>col>>x>>y;
    cout<<x<<' '<<y<<'\n';
    for(int j=x;j<=row;j++){
        for(int i=1;i<=col;i++){
            if(j==x &&i==y)continue;
               cout<<j<<' '<<i<<'\n';

        }
        j++;
        if(j>row)break;
        for(int i=col;i>=1;i--){
            if(j==x &&i==y)continue;
            cout<<j<<' '<<i<<'\n';
        }
    }
    if((row-x)%2)
    {
        for(int j=1;j<x;j++){
        for(int i=1;i<=col;i++){
            cout<<j<<' '<<i<<'\n';
            }
        j++;
        if(j==x)break;
        for(int i=col;i>=1;i--){
            cout<<j<<' '<<i<<'\n';
            }
        }
    }
    else{
        for(int j=1;j<x;j++){
           for(int i=col;i>=1;i--){
            cout<<j<<' '<<i<<'\n';
            }
            j++;
            if(j==x)break;
            for(int i=1;i<=col;i++){
            cout<<j<<' '<<i<<'\n';
            }
        }
    }
    return 0;
}
