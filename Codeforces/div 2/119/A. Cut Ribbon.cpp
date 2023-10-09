/*This morning I made the call
The one that ends it all
Hanging up, I wanted to cry
But damm it, this well's gone dry
Not for the money, not for the fame
Not for the power, just no more games
But now I'm safe in the eye of the tornado
I can't replace the lies that let a thousand days go
No more living, trapped inside
In her way, I'll surely die
In the eye of the tornado, blow me away
You'll grow to loathe my name
You'll hate me just the same
You won't need your breath
And soon you'll meet your death
Not from the years, not from the use
Not from the tears, just self abuse
But now I'm safe in the eye of the tornado
I can't replace the lies, that let a thousand days go
No more living trapped inside
In her way, I'll surely die
In the eye of the tornado, blow me away
Who's to say what's for me to say?
Who's to say what's for me to be?
Who's to say what's for me to do?
'Cause a big nothing it'll be for me
The land of opportunity
The golden chance for me
My future looks so bright
I think I've seen the light
Can't say what's on my mind
Can't do what I really feel
In this bed I made for me
Is where I sleep, I really feel
I warn you of the fate
Proven true too late
Your tongue twists perverse
Come drink now of this curse
And now I fill your brain
I spin you round again
My poison fills your head
As I tuck you into bed
You feel my fingertips
You won't forget my lips
You'll feel my cold breath
It's the kiss of death*/
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int arr[4],Max[4005];
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    int x;
    cin>>x>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    for(int i=1;i<=x;i++){
        for(int j=0;j<3;j++){
            if(i>=arr[j]&&Max[i-arr[j]]+1>Max[i]){
                if(i-arr[j]!=0){
                    if(Max[i-arr[j]]!=0)Max[i]=Max[i-arr[j]]+1;
                    else continue;
                }
                else Max[i]=Max[i-arr[j]]+1;
            }
        }
    }
    cout<<Max[x]<<'\n';
    return 0;
}
