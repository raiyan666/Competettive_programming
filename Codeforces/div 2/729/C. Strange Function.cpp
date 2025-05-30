#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long int result=0,n;
        cin>>n;
        for(unsigned long int i=1;i<=n;i++){
            unsigned long  int j;
            for(j=1;i%j==0;j++){}
            result+=(j);
            result%=1000000007;
        }
        cout<<result<<'\n';
    }
    return 0;
}
