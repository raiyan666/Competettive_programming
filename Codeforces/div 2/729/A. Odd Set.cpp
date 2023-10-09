#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t,odd=0,even=0,c;
        
        cin>>t;
        t*=2;
        while(t--){
            cin>>c;
            if(c%2)odd++;
            else even++;
        }

        if(odd==even)cout<<"Yes\n";
        else cout<<"No\n";
    }
}