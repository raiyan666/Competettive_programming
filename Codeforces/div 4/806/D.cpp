#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    string s;
    while(t--){
        vector<int<string>>str_mp(100005);
        vector<int>int_mp;
        vector<bool>bool_mp(100005,0);
        vector<int<int>>int_con(100005)
        cin>>n;
        while(n--){
            cin>>s;
            str_mp[s.size()].push_back(s);
            int_mp.push_back(s.size());
            bool_mp[s.size()]=1;
        }
        sort(int_mp.begin(),int_mp.end());
        int lim=int_mp.size();
        for(int i=lim-1;i>=;i--){
            int target=int_mp[i];
            //binary search for the sum
            int low=0,high=lim-1;
            while(low<high){
                if(int_mp[low]+int_mp[high]==target){
                    int_con[]
                }
            }
        }
    }
    return 0;
}