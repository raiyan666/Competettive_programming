/*I'm the boy in your other phone
Lightin' up inside your drawer at home all alone
Pushin' forty in the friendzone
We talk and then you walk away, every day
Oh, you don't think twice 'bout me
And maybe you're right to doubt me, but
But if you give me just one night
You're gonna see me in a new light
Yeah, if you give me just one night
To meet you underneath the moonlight
Oh, I want a take two, I wanna breakthrough
I wanna know the real thing about you
So I can see you in a new light
Take a ride up to Malibu
I just wanna sit and look at you, look at you
What would it matter if your friends knew?
Who cares what other people say anyway?
Oh, we can go far from here
And make a new world together, baby
'Cause if you give me just one night
You're gonna see me in a new light
Yeah, if you give me just one night
To meet you underneath the moonlight
Oh, I want a take two, I wanna breakthrough
I wanna know the real thing about you
So I can see you in a new light
Ah
Yeah, if you give me just one night
You're gonna see me in a new light
Yeah, if you give me just one night
To meet you underneath the moonlight
What do I do with all this?
What do I do with all this love that's runnin' through my veins for you?
What do I do with all this?
What do I do with all this love that's runnin' through my veins for you?
What do I do with all this?
What do I do with all this love that's runnin' through my veins for you?
What do I do with all this?
What do I do with all this? Ooh yeah*/
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
    vector<pair<int,int>> con,ta;
    int t,a,b,supc=0;cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        con.pb(mp(a,b));
    }
    for(int i=0;i<t;i++){
        ta=con;
        int x=(ta.begin()+i)->ff,y=(ta.begin()+i)->ss;
        ta.erase(ta.begin()+i);
        bool ri=false,le=false,up=false,dow=false;
        for(int j=0;j<ta.size();j++){
            if(ta[j].ff>x&&y==ta[j].ss)ri=true;
            else if(ta[j].ff<x&&y==ta[j].ss)le=true;
            else if(ta[j].ff==x&&y>ta[j].ss)up=true;
            else if(ta[j].ff==x&&y<ta[j].ss)dow=true;
        }
        if(ri&&le&&up&&dow)supc++;
    }
    cout<<supc<<'\n';
    return 0;
}
