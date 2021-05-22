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
    int arr[100005];
    //freopen ("myfile.txt","w",stdout);
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++)scanf("%d",&arr[i]);
    bool shuru=false;
    int pos1=1,pos2=1;
    for(int i=1;i<=n;i++){
        if(!shuru){
            if(arr[i]>arr[i+1]){
                shuru=true;
                pos1=i;
            }

         }
        else{
            if(arr[i]<maxim)break;
            else pos2=i;
        }
    }
    if(shuru)printf("yes\n%d %d\n",pos1,pos2);
    else printf("no\n");
    return 0;
}
