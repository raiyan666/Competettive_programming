#include<bits/stdc++.h>
using namespace std;
int maxim=200005;
int sum[200005];
#define ll long long int 
int main(){
    int n,k,q,l,r;
    cin>>n>>k>>q;

    while(n--){
        cin>>l>>r;
        sum[l]++;
        sum[r+1]--;
    }
    for(int i=1;i<maxim;i++)sum[i]+=sum[i-1];
    for(int i=1;i<maxim;i++)sum[i]=sum[i-1]+(sum[i]>=k);
    
    while(q--){
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<'\n';
    }
    return 0;
}