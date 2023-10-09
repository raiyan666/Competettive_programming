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
    string s;
    cin>>s;
    int n=s.size();
    bool st=0;
    for(int i=0;i<n;i++){
        if(i+2<n&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
            if(st)cout<<' ';
            st=0;
        }
        else{
            cout<<s[i];
            st=1;
        }
    }
    cout<<'\n';
    return 0;
}
