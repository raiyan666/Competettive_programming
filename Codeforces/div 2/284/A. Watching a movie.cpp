/*We do what we do 'cause we fucking want to
Never give a shit what others say to you
They try to give advice just to find we're cold as ice
Worthless opinions need not be spoken twice
We're proud of what me do, call us Trash we won't argue
We'll never be ashamed if our children ever knew
Forever we'll confirm and we're flattered by the term
Those embarrassed by it never should have tried it!

With my head held high
Standing dignified
I have my integrity
Never gave an inch
And I never flinch
When it came to my loyalty
100% all out nothing less
Aggressive, relentless and mean
When the chips are down
You'll never see us frown
You'll only see
Trash Under Pressure!

Heavy fuckin' sound, pound your head into the ground
Where others try and fail, we're glory bound
It's what we love to hear, we've done it for so many years
Rolling into town and blowing out your ears
Parents are against, they try and keep their children
Fenced in from the world and the evil influence
Like birds of a feather we'll always flock together
We want you to know we'll always thrash forever!
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
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
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    int n,x,arr[100005],brr[100005],sum=0;
    cin>>n>>x;
    brr[0]=0;
    for(int i=1;i<=n;i++)cin>>arr[i]>>brr[i];
    for(int i=1;i<=n;i++){
        sum+=((arr[i]-brr[i-1]-1)%x);
        //cout<<sum<<'\t';
        sum+=(brr[i]-arr[i])+1;
    }
    cout<<sum<<'\n';
    return 0;
}
