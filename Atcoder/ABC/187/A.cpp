#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  int x=0,y=0;
  while(a!=0){
    x+=(a%10);
    a/=10;
  }
    while(b!=0){
    y+=(b%10);
    b/=10;
  }
 cout<<max(x,y)<<'\n';
 return 0;
}
