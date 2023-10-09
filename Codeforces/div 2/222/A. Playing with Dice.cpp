#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    int a,b,wa=0,wb=0,dr=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++){
        //cout<<abs(x-i)<<' '<<abs(y-i)<<'\n';
        if(abs(a-i)<abs(b-i))wa++;
        else if(abs(a-i)>abs(b-i)) wb++;
        else dr++;
    }
    cout<<wa<<' '<<dr<<' '<<wb<<'\n';
    return 0;
}
