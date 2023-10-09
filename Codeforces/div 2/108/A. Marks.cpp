#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
char arr[103][103];
bool suc[103];
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)cin>>arr[i][j];
    for(int i=0;i<m;i++){
        char maxi=arr[0][i];
        for(int j=0;j<n;j++){
            if(arr[j][i]>=maxi)maxi=arr[j][i];
        }
        for(int j=0;j<n;j++)if(maxi==arr[j][i])suc[j]=1;
    }
    int st=0;
    for(int i=0;i<n;i++)if(suc[i])st++;
    cout<<st<<'\n';
    return 0;
}
