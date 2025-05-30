#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int 
void solve(ull m){
    //ull maxim=0,minim=0,rem=0;
    if(m&1){
        puts("-1");
        return;
    }
    if(m<4){
        puts("-1");
        return;
    }
    cout<<(m+4)/6<<" "<<m/4<<'\n';
    return;
}
int main(){
    ull t;
    cin>>t;
    ull n;
    while(t--){
        cin>>n;
        
        solve(n);
        // if(n%2!=0){
       
    }
}