/*
He had an unfamiliar face
Complete life in disarray
A simple man, power drunk
No worries of living, no more anything

Deep inside, I've seen it rise
Actions progress to no end
Mirror, mirror - please look inside
Do you see the reasons that we sin?

[Short Instrumental Break]

I'm not one to be forgot
Spoiled rotten, or so they say
Once burned, forever marked
Hurt by just a few, but so many have to pay

Deep inside, I've seen it rise
Actions progress to no end
Mirror, mirror - please look inside
Can you see the reasons that we sin?
*/

#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    int n,m,ans=0,x,lim;
    cin>>n>>m;
    lim=5-m;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<=lim)ans++;
    }

    cout<<ans/3<<'\n';
    return 0;
}
