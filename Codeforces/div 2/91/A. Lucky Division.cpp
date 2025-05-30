#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    //vector<int>test{,,,474,477,747,774};
    int t;
    cin>>t;
    if(t%4==0||t%7==0||t%47==0||t%74==0||t%474==0||t%477==0||t%747==0||t%774==0)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
