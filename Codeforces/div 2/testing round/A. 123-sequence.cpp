#include <bits/stdc++.h>
using namespace std;
int arr[5];
int main()
{
    ios_base::sync_with_stdio(false);
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        arr[x]++;
    }
    x=max(arr[1],arr[2]);
    x=max(x,arr[3]);
    cout<<t-x<<'\n';
    return 0;
}
