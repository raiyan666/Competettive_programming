#include <bits/stdc++.h>
#define ll long long 
#define nl cout<<endl;
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int arr[10];
        int a;
        cin>>a;
        forn(a)cin>>arr[i];
        sort(arr,arr+a);
        arr[0]++;
        int product=1;
        forn(a)product*=arr[i];
        cout<<product<<'\n';
    }
    return 0;
}