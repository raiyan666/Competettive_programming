#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
    int k,n;
    cin>>n>>k;
    vector<int>t;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        t.pb(x);
    }
    int s=0;
    int m=t[k-1];
    for(int j=0;j<n;j++)
    {
        if(t[j]>=m&t[j]!=0)
        {
            s++;
        }
    }
    cout<<s;

    return 0;
}
