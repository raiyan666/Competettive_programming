/*
Ooh, I fucked your girl's titties!
Ooh, I fucked your girl's titties!
Ooh, I fucked your girl's titties!
Ooh, I fucked your girl's titties!
Ooh, I fucked your girl's titties!
Ooh, I fucked your girl's titties!
Ooh, I fucked your girl's titties!
Ooh, I fucked your girl's titties!

[Verse 1]
Oh I'm sorry man, I didn't know!
JK, JK, I knew all along!
And she's sucking on my hose
I go twelve inch deep in the pussy
After twenty minutes you can drive a fucking Jeep in the pussy
Know what I'm talking 'bout?
Smack her in the pussy
When I pee it burns
Let it burn like George Bushy
I regret to inform you I fucked your girl's pussy
Man I swear I didn't know
JK, JK, JK, JK I knew all along!
I just fucked your girl before this song
And I know it's kind of wrong
When she's sucking on my dong
And she's so fat like a land whale
Uh, shoot that poon with a harpoon
Yeah, I just wanna lick a whale in the fucking whale pussy
That's why I fucked your fat girlfriend, you fucking nerd!
[Hook]
But she's so nice
But she's so nice
But she's so nice
But she's so nice
But she's so nice
But she's so nice
She's so nice
She's so nice
She lets me use her body
But she's so nice
But she's so nice
But she's so nice
But she's so nice
But she's so nice
But she's so nice

[Verse 2]
Yeah, treat her like a bitch
I fuck her in the ass and I fuck her in the tits
If she can handle that then I'll let her suck my dick
And her man is coming back so I better make it quick
Yeah, you know who you are you piece of shit
Your girlfriend's always sucking on my dick like a Slim Jim stick
So next time you go down on her clit
Tell me how my dick tastes
Tell me how my motherfucking dick tastes!
[Hook 2]
But she's so nice
But she's so nice
But she's so nice
But she's so nice
But she's so nice
But she's so nice
I treat her badly
But she comes back, every time
It goes to show
That none of these hoes
Are worth a dime
But she's so nice
But she's so nice
But she's so nice
But she's so nice
But she's so nice
But she's so nice
*/
#include <bits/stdc++.h>

#define vi              vector<int>
#define pb              push_back

using namespace std;
int main()
{
    vi con;
    int n,l,x;
    int maxim=0;
    scanf("%d%d",&n,&l);
    for(int i=0;i<n;i++){
        //cin>>x;
        scanf("%d",&x);
        con.pb(x);
    }
    //con.pb(l);
    sort(con.begin(),con.end());
    for(int i=1;i<n;i++) {
            maxim=max(con[i]-con[i-1],maxim);
            //cout<<maxim<<'\t';
    }
    double ans=(double)maxim/2.00;
    ans=fmax((double)con[0]-0,ans);
    //cout<<ans<<'\t';
    ans=fmax((double)(l-con[n-1]),ans);
    //cout<<ans<<'\t';
    printf("%.10f\n",ans);
    return 0;
}
