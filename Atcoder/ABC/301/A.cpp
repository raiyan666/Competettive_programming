#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char s[n+1];
    int a=0,t=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]=='A')a++;
        else t++;
    }
    if(a==t){
        if(s[n-1]=='A')cout<<"T\n";
        else cout<<"A\n";
    }
    else{
        if(a>t)cout<<"A\n";
        else cout<<"T\n";
    }
    return 0;
}