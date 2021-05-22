#include <iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int d=x/2020;
        int rem=x%2020;
        if(rem>d)cout<<"NO\n";
        else cout<<"YES\n";
    }
}
