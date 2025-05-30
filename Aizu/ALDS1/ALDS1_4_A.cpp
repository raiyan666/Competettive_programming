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
    int n,x;
    cin>>n;
    set<int> S,T;
    for(int i=0;i<n;i++){
        cin>>x;
        S.insert(x);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x;
        T.insert(x);
    }
    int c=0;
    set<int>::iterator itr1,itr2;
    for(itr1 = S.begin(); itr1 != S.end(); itr1++){
        for(itr2 = T.begin(); itr2 != T.end(); itr2++){
            if(*itr1==*itr2){
                c++;
                break;
            }
        }
    }
    cout<<c<<'\n';

    return 0;
}
