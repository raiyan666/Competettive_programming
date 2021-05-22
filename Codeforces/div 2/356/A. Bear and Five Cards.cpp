/*There's a secret place I like to go
Everyone is there but their face don't show
If you get inside you can't get out
There's no coming back, I hear them shout
Welcome to my hide away, my secret place
How I arrived I can't explain
You're welcome to, if you want to stay
But everyone just runs away
Let me in, get me out
Can't do more than twist and shout
Lost my soul without a trace
Found it again in my secret place
In disgrace
I hide from those that try to find me
Scary things that's right behind me
I lost myself, I must confess
I can't explain how I got this mess*/
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
    map<int,int>mymap;
    vi larg;
    int x,sum=0;
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    for(int i=1;i<=5;i++){
        cin>>x;
        mymap[x]++;
        sum+=x;
    }
    for(auto it=mymap.begin();it!=mymap.end();it++){
        if((it->ss)>1&&(it->ss)<=3)larg.pb((it->ff)*(it->ss));
        else if((it->ss)>3){
            larg.pb((it->ff)*3);
        }
    }
    if(!larg.empty())x=*max_element(larg.begin(),larg.end());
    else x=0;
    cout<<sum-x<<'\n';
    return 0;
}
