#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long int n;
        string s;
        cin>>n>>s;
        if(s=="Alice"){
            if(n%3==1)cout<<"Case "<<i<<": "<<"Bob\n";
            else cout<<"Case "<<i<<": "<<"Alice\n";
        }
        else{
            if(n%3==0)cout<<"Case "<<i<<": "<<"Alice\n";
            else cout<<"Case "<<i<<": "<<"Bob\n";
        }
    }
    return 0;
}
