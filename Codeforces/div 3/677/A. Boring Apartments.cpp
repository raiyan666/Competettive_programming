#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>

#define vi              vector<int>
#define pb              push_back


#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int arr[10],brr[4]={1,2,3,4};
int main()
{
    vi con;
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    for(int j=0;j<10;j++)
    {
        for(int i=0;i<=3;i++)
        {
            arr[j]+=(j*pow(10,i));
            if(arr[j])con.pb(arr[j]);
        }
    }
    //sort(con.begin(),con.end());
    //for(auto it=con.begin();it!=con.end();it++)cout<<*it<<'\t';
    int t;cin>>t;
    while(t--){
        int x,ans=0;
        cin>>x;
        for(int i=0;i<con.size();i++)
        {
            ans+=brr[i%4];
            if(con[i]==x)break;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
