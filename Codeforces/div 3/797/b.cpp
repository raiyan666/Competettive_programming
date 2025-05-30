#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[50004],b[50004],diff[50004];
    while(t--){
        int n,max=0;
        cin>>n;
        bool state=true;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            diff[i]=a[i]-b[i];
            if(diff[i]<0){
                state=false;
                //break;
            }
            if(diff[i]>max){
                max=diff[i];
            }
        }
        //cout<<"max "<<max<<endl;
        if(state){
            
            for(int i=0;i<n;i++){
                if((a[i]-max)==b[i] ){
                    state=true;
                }
                else if(a[i]-max<0&&b[i]==0){
                    state=true;
                   // break;
                }
                else{
                    state=false;
                    break;
                }
               // cout<<a[i]-max<<" ";
            }
            if(state){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            
        }
        else{
            cout<<"NO\n";
            //continue;
        }
    }
    return 0;
    
}