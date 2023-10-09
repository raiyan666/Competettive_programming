/*
He had an unfamiliar face
Complete life in disarray
A simple man, power drunk
No worries of living, no more anything

Deep inside I've seen it rise
Actions progress to no end
Mirror, mirror please look inside
Do you see the reasons that we sin

Not one to be forgot
Spoiled rotten, so they say
Once burned, forever marked
Hurt by just a few but so many have to pay

Pressure coming down
Down on me, gonna break
Broken fingernails
Digging in, scratch my face

Nervous, like a cat
Gonna jump through my skin
Shadows on the wall
Stretching out, grope for me

Reasons, deep in me
Let me be
Let me bleed
Set me free
The reasons that we sin
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
    int t;cin>>t;
    int n,k,ans,x;
    while(t--){
        //ans=0;
        cin>>n>>k;
        x=n/2;if(n%2)++x;
        if(x/2-(x-x/2)==k)ans=0;
        else ans=abs(k-n);
        cout<<ans<<'\n';
    }
    return 0;
}
