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
My friend of misery, yeah, yeah, oh
*/
#include <bits/stdc++.h>
#define vi              vector<int>
#define pb              push_back

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

int a[100000];
int binaryS(int key,int high,int low){
    int ans;
    if(high-1==low){
        if(key<=a[low])ans=low;
        else ans=high;
    }
    else
        if(key==a[(high/low)/2])ans=(high+low)/2;
        else if(a[(high+low)/2]<key)ans=binaryS(key,(high+low)/2,high);
        else if(a[(high+low)/2]>key)ans=binaryS(key,low,(high+low)/2);

    return ans;
}
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    int n,x,m,key;

    cin>>n;
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    for(int j=1;j<n;j++){
        a[j]+=a[j-1];
    }
    cin>>m;
    for(int i =0;i<m;i++){
        cin>>key;
        int x=binaryS(key,m-1,0)+1;
        cout<<x<<'\n';
    }

    return 0;
}
