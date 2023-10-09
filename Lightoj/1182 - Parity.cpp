#include <bits/stdc++.h>
#define ll              long long
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        string s;
        ll n,current=0;
        scanf("%lld",&n);
        while(n){
            current+=(n%2);
            n/=2;
        }
        printf("Case %d: ",i);
        if(current%2)printf("odd\n");
        else printf("even\n");
    }
    return 0;
}
