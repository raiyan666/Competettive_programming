#include <iostream>
#define ll long long
using namespace std;
int main(){
    ll n,m,l;
    cin>>n>>m>>l;
    ll a[101][101],b[101][101],c[101][101];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++)cin>>a[i][j];
    }
    for(ll i=0;i<m;i++){
        for(ll j=0;j<l;j++)cin>>b[i][j];
    }
    for(ll j=0;j<n;j++){
        for(ll i=0;i<l;i++){
            c[j][i]=0;
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<l;j++){
            for(ll k=0;k<m;k++)c[i][j]+=a[i][k]*b[k][j];
        }
    }
    for(ll j=0;j<n;j++){
        for(ll i=0;i<l;i++){
            cout<<c[j][i];
            if(i!=l-1)cout<<' ';
            else cout<<'\n';
        }
    }
    return 0;
}
