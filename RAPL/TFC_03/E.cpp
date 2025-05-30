#include<bits/stdc++.h>

using namespace std;
int main(){
   // while(1){
    int n,inp;
    unordered_map<int,int>evenm,oddm;
    cin>>n;
    vector<pair<int,int>>even,odd;
    for(int i=0;i<n;i++){
        cin>>inp;
        if(i%2)oddm[inp]++;
        else evenm[inp]++;
    }
    for(auto i = evenm.begin(); i != evenm.end(); ++i){
            even.push_back({i->second,i->first});
        }
    for(auto i = oddm.begin(); i != oddm.end(); ++i){
            odd.push_back({i->second,i->first});
    }
    sort(even.begin(),even.end());
    reverse(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    reverse(odd.begin(),odd.end());
    int div=n/2;
    int ans=10000000;
    
    if(even[0].second!=odd[0].second){
        ans=(2*div)-odd[0].first-even[0].first;
    }
    else{
        if(even.size()>=2)ans=min(ans,(div-even[1].first+div-odd[0].first));
        if(odd.size()>=2)ans=min(ans,(div-odd[1].first+div-even[0].first));
        ans=min(ans,(div-odd[0].first+div));
        ans=min(ans,(div-even[0].first+div));
    }
    
   
    cout<<ans<<"\n";
    return 0;
}