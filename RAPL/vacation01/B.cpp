#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=pow(2,n/2);
    if(n%2==0)cout<<x<<"\n";
    else cout<<"0\n";
    return 0;
}