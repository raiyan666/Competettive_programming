
#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
bool arr[28];
using namespace std;
int main()
{
    fast_in_out
    char c;
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    for(int i=0;i<t;i++){
        cin>>c;
        if(c>='A'&&c<='Z'){
            arr[c-'A']=1;
        }
        else arr[c-'a']=1;
    }
    for(int i=0;i<26;i++){
        if(!arr[i]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
