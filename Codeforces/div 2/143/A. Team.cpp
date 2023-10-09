#include<bits/stdc++.h>

using namespace std;
int main()
{
    int test,ans=0;
    cin>>test;
    int arr[3];
    while(test--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        int n=sizeof(arr)/sizeof(arr[0]);
        int x=count(arr,arr+n,1);
        if(x>=2)
        {
            ans++;
        }
    }
    cout<<ans;
}
