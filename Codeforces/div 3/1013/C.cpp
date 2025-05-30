#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<int>ans;
        if(n%2==0){
            cout<<-1<<'\n';
            continue;
        }
        else{

            ans.push_back(n);
            for(int i=1;i<n;i++){
                ans.push_front(i);
            }
        }
        while(!ans.empty()){
            cout<<ans.front()<<" ";
            ans.pop_front();
        }
        cout<<'\n';
    }
}