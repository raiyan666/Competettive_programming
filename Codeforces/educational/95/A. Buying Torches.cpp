/*You just stood there screaming
Fearing no one was listening to you
They say the empty can rattles the most
The sound of your voice must soothe you
Hearing only what you want to hear
And knowing only what you've heard
You you're smothered in tragedy
And you're up to save the world
Misery you insist that the weight of the world
Should be on your shoulders
Misery there's much more to life than what you see
My friend of misery
You still stood there screaming
No one caring about these words you tell
My friend before your voice is gone
One man's fun is another's hell
These times are sent to try men's souls
But something's wrong with all you see
You, you'll take it on all yourself
Remember, misery loves company
Misery you insist that the weight of the world
Should be on your shoulders
Misery there's much more to life than what you see
My friend of misery (my friend of misery)
Misery you insist that the weight of the world
Should be on your shoulders
Misery there's much more to life than what you see
My friend of misery
You just stood there screaming, oh
My friend of misery, yeah, yeah, oh*/
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    //fast_in_out
    //freopen ("myfile.txt","w",stdout);
    ll t;cin>>t;
    ll x,y,k;
    while(t--){
        ll ans=1000000000;
        cin>>x>>y>>k;
        for(ll i=0;i<=1000000000;i++){
            for(ll j=0;j<=1000000000;j++)
                if(i*x+j*y-2*k==i+j)ans=min(ans,i+j);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
