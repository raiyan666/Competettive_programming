#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   // while(1){
    ll b,k,cur=0,x,pow=1;
    cin>>b>>k;
    vector <ll> arr;
    for(ll i=0;i<k;i++){
        cin>>x;
        arr.push_back(x);
    }
    reverse(arr.begin(),arr.end());
    for(ll i=0;i<k;i++){
        cur+=(arr[i]*pow);
        pow*=b;
    }
    //cout<<cur<<"\t";
    if(cur%2==0)cout<<"even\n";
    else cout<<"odd\n";
    arr.clear();
    //}
    
    return 0;
}