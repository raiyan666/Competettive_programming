#include <bits/stdc++.h>
#define ll              long long
#define SL(n)           scanf("%intd",&n)
#define LF              double
#define SF(n)           scanf("%intf",&n)

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define FOR(i,s,e)      for( int i=s;i<=e;i++)
#define RFOR(i,e,s)     for( int i=e;i>=s;i--)

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int arr[100000000];
int main()
{
    fast_in_out
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=0,pos;
        cin>>n;
        for(int i=1;i<=sqrt(n)+1;i++)
        {
            arr[i]=gcd(i,n-i);
            if(maxi<=arr[i]){
                maxi=arr[i];
                pos=i;
            }
        }
        cout<<pos<<" "<<n-pos<<'\n';
    }
    return 0;
}
