#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
long long sum[100005];
void solve(){
    long long n,good;
        string s;
        cin>>n;
        cin.ignore();
        cin>>s;
        map<long long,long long>cnt;
        good=0;
        for(int i=0;i<n;i++){
            sum[i+1]=sum[i]+(int)(s[i]-'0');
        }
        cnt[0]++;
        for(int i=1;i<=n;i++){
            cnt[sum[i]-i]++;
        }
        for(auto i:cnt)
        {
            long long x=i.second;
            good+=(x*(x-1))/2;
        }
        cout<<good<<'\n';
}
int main()
{
    fast_in_out
    long long t;
    cin>>t;
    while(t--)solve();
    return 0;
}
