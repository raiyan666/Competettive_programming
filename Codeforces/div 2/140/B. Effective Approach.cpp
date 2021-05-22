#include <bits/stdc++.h>
using namespace std;
int arr1[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int m;
        scanf("%d",&m);
        arr1[m]=i;
    }
    int m;
    scanf("%d",&m);
    long long a=0,b=0;
    for(int i=0;i<m;i++)
    {
        int k;
        scanf("%d",&k);
        a+=arr1[k];
        b+=n-arr1[k]+1;
    }
    cout<<a<<" "<<b<<'\n';
    return 0;
}
