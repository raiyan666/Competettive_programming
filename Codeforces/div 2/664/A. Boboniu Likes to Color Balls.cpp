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
int arr[5];
int main()
{
    fast_in_out
    int t,odd;
    cin>>t;
    while(t--){
        int odd,even;
        bool palindrome=false;
        for(int i=0;i<=3;i++)cin>>arr[i];
        while(arr[0]>=0&&arr[1]>=0&&arr[2]>=0)
        {
            odd=0,even=0;

            for(int i=0;i<=3;i++){
                //cout<<"arr["<<i<<"]: "<<arr[i]<<'\t';
                if(arr[i]%2)odd++;
                else even++;
                --arr[i];
            }
            arr[3]+=4;
            if(odd<=1){
                palindrome=true;
                break;
            }
            if(odd==2){
                palindrome=false;
                break;
            }
            //cout<<"odd :"<<odd<<" even:"<<even<<'\n';
        }
        if(palindrome)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
