#include <iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        long long k=(a+b+c+n)/3;

        if((a+b+c+n)%3==0&&k>=a&&k>=b&&k>=c){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}