/*
Is this the real life? Is this just fantasy?
Caught in a landslide, no escape from reality
Open your eyes, look up to the skies and see
I'm just a poor boy, I need no sympathy
Because I'm easy come, easy go, little high, little low
Any way the wind blows doesn't really matter to me, to me

Mama, just killed a man
Put a gun against his head, pulled my trigger, now he's dead
Mama, life had just begun
But now I've gone and thrown it all away
Mama, ooh, didn't mean to make you cry
If I'm not back again this time tomorrow
Carry on, carry on as if nothing really matters

Too late, my time has come
Sends shivers down my spine, body's aching all the time
Goodbye, everybody, I've got to go
Gotta leave you all behind and face the truth
Mama, ooh (Any way the wind blows)
I don't wanna die
I sometimes wish I'd never been born at all

I see a little silhouetto of a man
Scaramouche, Scaramouche, will you do the Fandango?
Thunderbolt and lightning, very, very frightening me
(Galileo) Galileo, (Galileo) Galileo, Galileo Figaro magnifico
But I'm just a poor boy, nobody loves me
He's just a poor boy from a poor family
Spare him his life from this monstrosity
Easy come, easy go, will you let me go?
Bismillah! No, we will not let you go
(Let him go) Bismillah! We will not let you go
(Let him go) Bismillah! We will not let you go
(Let me go) Will not let you go
(Let me go) Will not let you go
(Never, never, never, never let me go) Ah
No, no, no, no, no, no, no
(Oh, mamma mia, mamma mia) Mamma mia, let me go
Beelzebub has a devil put aside for me, for me, for me!

So you think you can stone me and spit in my eye?
So you think you can love me and leave me to die?
Oh, baby, can't do this to me, baby!
Just gotta get out, just gotta get right outta here
(Ooh)
(Ooh, yeah, ooh, yeah)
Nothing really matters, anyone can see
Nothing really matters
Nothing really matters to me
Any way the wind blows
*/

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
    //int t;cin>>t;
    int a,x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(y2-y1==0){
        a=x2-x1;if(a<0)a=-a;
        cout<<x1<<' '<<y1+a<<' '<<x2<<' '<<y2+a<<'\n';
    }
    else if(x2-x1==0){
            //cout<<x1<<'\n'<<y1<<'\n'<<x2<<'\n'<<y2<<'\n';
        a=y2-y1;if(a<0)a=-a;
        cout<<x1+a<<' '<<y1<<' '<<x2+a<<' '<<y2<<'\n';
    }
    else if(abs(x1-x2)==abs(y1-y2)){
        //cout<<x1<<'\n'<<y1<<'\n'<<x2<<'\n'<<y2<<'\n';
        cout<<x2<<' '<<y1<<' '<<x1<<' '<<y2<<'\n';
    }
    else {
        cout<<"-1\n";
    }
    return 0;
}
