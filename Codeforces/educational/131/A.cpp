#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum=a+b+c+d;
        if(sum==0)sum=0;
        else if(sum==4)sum=2;
        else sum=1;
        cout<<sum<<"\n";
    }
    return 0;
}