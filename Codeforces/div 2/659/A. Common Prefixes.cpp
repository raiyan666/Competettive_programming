#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int arr[103];
int main()
{
    //fast_in_out
    int t;
    char x[201];
    cin>>t;while(t--){
        int n;
        cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    int maxi=max(arr,arr+n);
    for(int i=1;i<=n;i++){
        if(i%3==0){
            x='a';
        }
        else if(i%3==1){
            x='c';
        }
        else x='b';
        for(int j=1;j<=arr[i];j++)cout<<x;
        if(i%2)cout<<rem1<<'\n';
        else cout<<rem2<<'\n';
        for(int j=1;j<=arr[i];j++)cout<<x;
    }
    if(n%2==0)cout<<rem1<<'\n';
    else cout<<rem2<<'\n';

    }

    return 0;
}
