#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{

    //freopen ("myfile.txt","w",stdout);
    int n;
    scanf("%d",&n);
    vector<int> arr(n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    bool again=false;
    int L=0,R;
    while(arr[L]<arr[L+1]&&L+1<n){
        L++;
    }
    R=L+1;
    while(arr[R]<arr[R-1]&&R<n){
        R++;
    }
    reverse(arr.begin()+L,arr.begin()+R);
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            cout<<"no\n";
            return 0;
        }
    }
    //if(arr[L]<arr[R])R=L;
    cout<<"yes\n"<<L+1<<" "<<R<<"\n";
    return 0;
}
