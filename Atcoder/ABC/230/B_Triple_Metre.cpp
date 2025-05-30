#include <iostream>
#include<string>
using namespace std;
int main(){
    while(true){
    string s;
    cin>>s;
    int len=s.size();
    bool cholbe=false;
    if(len<3){
            cholbe=true;
            break;
    }
    else{
        for(int i=0;i+2<len;i++){

        
        
            
        // cout<<'Yes\n';
            if(s[i]=='o'&&s[i+1]=='x'&&s[i+2]=='x') cholbe=true;
            else if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='o') cholbe=true;
            else if(s[i]=='x'&&s[i+1]=='o'&&s[i+2]=='x') cholbe=true;
            else cholbe=false;
            

        if(!cholbe)break;
    }
    }
    
    if(cholbe)cout<<"Yes\n";
    else cout<<"No\n";

    }
    
    return 0;
}