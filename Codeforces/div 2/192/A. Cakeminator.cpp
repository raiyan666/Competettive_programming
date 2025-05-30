/*
Lost in a dream
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

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")*/
#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
bool col[12],row[12];
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    string s;
    int r,c,R=0,C=0;
    cin>>r>>c;
    //bool arr[r+2][c+2];
    cin.ignore();
    for(int i=0;i<r;i++){
        cin>>s;
        //cout<<i<<'\t';
        for(int j=0;j<s.size();j++){
            if(s[j]=='S'){
                row[i]=true;
                col[j]=true;
            }
        }
    }
    for(int i=0;i<r;i++)if(row[i])R++;
    for(int i=0;i<c;i++)if(col[i])C++;
    //for(int j=0;j<r;j++)for(int i=0;i<c;i++)if(arr[j][i])sum++;
    cout<<r*c-R*C<<'\n';
    return 0;
}
