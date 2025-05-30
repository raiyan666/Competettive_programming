#include<bits/stdc++.h>
#define ll long long 
#define nl cout<<'\n';
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int temp=max(a+b,a-b);
    temp=max(temp,a*b);
    cout<<temp;
    nl;
    return 0;
}