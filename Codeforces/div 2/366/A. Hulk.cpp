#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>


#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    map<int,string>con;
    con[1]="I hate ";
    con[0]="I love ";
    for(int i=1;i<=t;i++){
        cout<<con[i%2];
        if(i!=t)cout<<"that ";
        else cout<<"it\n";
    }
    return 0;
}
