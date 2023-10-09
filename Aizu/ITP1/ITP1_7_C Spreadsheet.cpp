#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int arr[102][102];

int main()
{
    fast_in_out
    int r,c,i,sum;
    cin>>r>>c;
    //int arr[r][c];

    for(int j=0;j<r;j++)
    {
        //sum=0;
        for(i=0;i<c;i++){
            cin>>arr[j][i];
            arr[j][c]+=arr[j][i];
            arr[r][i]+=arr[j][i];
        }
        arr[r][c]+=arr[j][i];
        //=sum;
    }
    for(int j=0;j<=r;j++){
        for(i=0;i<=c;i++){
            cout<<arr[j][i];
            if(i==c)cout<<'\n';
            else cout<<" ";
        }
        //cout<<'\n';
    }

    return 0;
}
