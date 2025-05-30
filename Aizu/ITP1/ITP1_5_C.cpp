#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    //fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    int h,w;

    while(cin>>h>>w){

        for(int i=1;i<=h;i++){
        if(i%2){
            for(int j=1;j<=w;j++){
                if(j%2)cout<<"#";
                else cout<<".";
            }
        }
        else{
            for(int j=1;j<=1;j++){
            for(int j=1;j<=w;j++){
                if(j%2)cout<<".";
                else cout<<"#";
            }
        }
        }

        cout<<'\n';
    }
    cout<<'\n';
    }

    return 0;
}
