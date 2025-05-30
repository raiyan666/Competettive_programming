#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%19==0)cout<<"Lucky\n";
        else cout<<"Unlucky\n";
    }
    return 0;
}
