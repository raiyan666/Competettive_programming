#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n,x;
    cin>>n;
    vector<int,pair<int,int>> q0,q1;
    for(int i=0;i<450;i++){
        for(int j=0;j<450;j++){
            q0.push_back({3*i+1+3*j+2,3*i+1,3*j+2});
            q0.push_back({3*i+2+3*j+1,3*i+2,3*j+1});
            q0.push_back({3*i+1+3*j+1,3*i+1,3*j+1});
            q0.push_back({3*i+2+3*j+2,3*i+2,3*j+2});
            q1.push_back({3*i+1+3*j+1,3*i+1,3*j+1});
        }
    }
    sort(q0.rbegin(),q0.rend());
    sort(q1.rbegin(),q1.rend());
    while(n--){
        cin>>x;
        if(x==1){

        }
        else{
            auto it=q0.back();
            q0.pop_back();
            cout<<it.second<<" "<<it.third<<endl;
            
        }
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}