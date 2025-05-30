#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,chk=0;
    cin>>a>>b;
    if(a>b)swap(a,b);
   // map<int, int>prime;
    for(int i=2;i<=trunc(sqrt(b))+1;i++){
        if(a%i==0 &&b%i==0 )++chk;
        while(a%i==0)a/=i;
        while(b%i==0)b/=i;
    }
    if(a>1 &&b>1 &&a==b)chk++;   
    chk++; 
    cout<<chk<<'\n';
    return 0;
}
