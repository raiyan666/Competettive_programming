#include <iostream>
using namespace std;
int main(){
    int t,arr[5];
    cin>>t;
    while(t--){
        for(int i=0;i<4;i++)cin>>arr[i];
        int ans=0;
        for(int i=1;i<4;i++){
            if(arr[0]<arr[i]){
                ans++;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
    
    
}