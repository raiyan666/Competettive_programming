#include <iostream>
#include <algorithm>
using namespace std;
#define MAXN 100001
#define ll long long int
int main()
{
    ll arr[MAXN],N,K;
    cin>>N>>K;
    for(ll i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    ll dif=arr[N-1]-arr[0];
    dif=(dif*2);
    if(K>=dif)
    {
        dif=0;
    }
    else {
        dif=dif%K;
    }
    cout<<dif<<'\n';
    return 0;
}
