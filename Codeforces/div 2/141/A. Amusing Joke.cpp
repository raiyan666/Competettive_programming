#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int a[30],b[30];
int main()
{
    fast_in_out
    string s,t,r;
    cin>>s>>r>>t;
    for(int i=0;i<s.size();i++)a[s[i]-'A']++;
    for(int i=0;i<r.size();i++)a[r[i]-'A']++;
    for(int i=0;i<t.size();i++)
    {
        b[t[i]-'A']++;
    }
    for(int i=0;i<30;i++){
        if(a[i]!=b[i]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
