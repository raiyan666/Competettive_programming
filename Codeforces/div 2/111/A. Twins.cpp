#include <bits/stdc++.h>
using namespace std;
int arr[102];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int i=n-1,sum2=0;
    while(sum2+sum2<=sum){
        sum2+=arr[i];
        i--;
    }
    cout<<n-i-1<<'\n';
    return 0;
}
