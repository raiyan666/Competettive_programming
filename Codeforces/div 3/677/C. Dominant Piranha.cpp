#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define vi              vector<int>
#define pb              push_back
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        vi arr;
        int maxim=0,minim=1000000009;
        int n,x,pos=-1;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>x;
            arr.pb(x);
            maxim=max(maxim,x);
            minim=min(minim,x);
        }
        if(maxim==minim){
            cout<<pos<<'\n';
            continue;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==maxim){
                if(i-1>=0&&arr[i]>arr[i-1])pos=i;
                else if(i+1<n&&arr[i]>arr[i+1])pos=i;
            }
        }
        cout<<pos+1<<'\n';
    }
    return 0;
}
