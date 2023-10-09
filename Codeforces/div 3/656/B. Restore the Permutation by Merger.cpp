#include <bits/stdc++.h>

#define nl              printf("\n")
using namespace std;
int arr[52];

int main()
{
    //fast_in_out
    int t;
    cin>>t;
    while(t--)
    {
        queue<int>ans;
        int n,x;
        cin>>n;
        for(int i=0;i<2*n;i++){
            cin>>x;
            if(arr[x]==0)ans.push(x);
            arr[x]++;
        }
        while(!ans.empty()){
            cout<<ans.front()<<" ";
            ans.pop();
        }
        nl;
        for(int i=0;i<52;i++)arr[i]=0;
    }
    return 0;
}
