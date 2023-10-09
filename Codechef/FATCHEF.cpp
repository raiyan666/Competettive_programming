#include <bits/stdc++.h>
#define ll              long long
#define mod             1000000009
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        char arr[100005];
        memset(arr,'0',100001);
        //cout<<arr;
        int n,m,minim=100000,maxim=1;
        cin>>n>>m;
        cin.ignore();
        for(int i=0;i<m;i++){
            char c;int x;
            cin>>c>>x;
            cin.ignore();
            if(c>='A'&&c<='Z')
            arr[x]=c;
            minim=min(minim,x);
            maxim=max(maxim,x);
        }
        ll product=1,cur=0;
        char prev=arr[minim];
        for(int i=minim;i<=maxim;i++){
            if(arr[i]=='0'){
                cur++;
            }
            else {
                //cout<<cur<<'\t';
                if(arr[i]!=prev)
                product=((product%mod)*((cur+1)%mod))%mod;
                cur=0;
                prev=arr[i];
            }
        }
        if(product<0)product+=mod;
        cout<<product<<'\n';
    }
    return 0;
}
