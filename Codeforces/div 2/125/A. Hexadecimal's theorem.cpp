/*Lost in a dream
Nothing is what it seems
Searching my head
For the words that you said

Tears filled my eyes
As we said our last goodbyes
This sad scene replays
Of you walking away

My body aches from mistakes
Betrayed by lust
We lied to each other so much
That in nothing we trust

Time and again,
She repeats let's be friends
I smile and say yes
Another truth bends,
I must confess

I try to let go, but I know
We'll never end 'til we're dust
We lied to each other again
But I wish I could trust

My body aches from mistakes
Betrayed by lust
We lied to each other so much
That in nothing we trust

God help me please, on my knees
Betrayed by lust
We lied to each other so much
That in nothing we trust

How could this be happening to me
I'm lying when I say "Trust me"
I can't believe this is true
Trust hurts
Why does trust equal suffering

Absolutely nothing we trust

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
int arr[50];
int main()
{
    //fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    int i=0;
    arr[0]=0;arr[1]=1,arr[2]=1;
    for(i=3;i<=45;i++){
        arr[i]=arr[i-1]+arr[i-2];

    }
    bool fibo=false;
    for(i=0;i<=45;i++){
            //cout<<arr[i]<<'\t';
       if(arr[i]==t)fibo=true;
    }
    if(fibo)cout<<t<<" 0 0\n";
    else cout<<"I'm too stupid to solve this problem\n";
    return 0;
}
