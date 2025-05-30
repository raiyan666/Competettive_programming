#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,p;
    cin>>t;
    string s;
    while(t--){
        int sum=0;
        cin>>s;
        cin>>p;
        
        vector<int> freq(50);
        for(int i=0;i<s.size();i++){
            sum+=(int)(s[i]-'a')+1;
            freq[s[i]-'a'+1]++;
        }
        //cout<<sum<<"\t";
        int rem=sum, i=26;

        while(rem>p){
            if(freq[i]){
                rem-=i;
                freq[i]--;
            }
            else --i;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a'+1]){
                cout<<s[i];
                --freq[s[i]-'a'+1];
            }
        }
        cout<<"\n";
    }
    return 0;
}