/*The awe of love pulled out of the roots
Just rolling thunder we found
Pregnant with the tears of shame
But never let'em out

We shoot 'em down
We shoot 'em down
We shoot 'em down

Free fire zone with my M-16
Vendetta burns inside
Wiped out their lives for eyes unseen
Mercy chilled to the freezing point
To the war

Blind religion, clouded minds
Called by the name of war
232 body penetration
Before you hit the ground

We shoot 'em down
We shoot 'em down
We shoot 'em down

Free fire zone with my M-16
Vendetta burns inside
Wiped out their lives for eyes unseen
Mercy chilled to the freezing point
Free fire zone with my M-16
Vendetta burns inside
Wiped out their lives for eyes unseen
Mercy chilled to the freezing point
To the war

You are imploring to my aid
Machine gun fire scorn
Life corroded from inside
Remains in silent force

We shoot 'em down
We shoot 'em down
We shoot 'em down

Free fire zone with my M-16
Vendetta burns inside
Wiped out their lives for eyes unseen
Mercy chilled to the freezing point
Free fire zone with my M-16
Vendetta burns inside
Wiped out their lives for eyes unseen
Mercy chilled to the freezing point

Free fire zone with my M-16
Free fire zone with my M-16
Mercy chilled to the freezing point
To the war
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
long long get(ll x){
    return x*(x-1)/2;
}
using namespace std;

int main()
{
    fast_in_out

    ll n,m;
    scanf("%lld%lld",&n,&m);
    ll a,ans1,ans2;
    a=n-m+1;
    ans1=get(a);
    a=n/m;
    if(n%m) ans2=get(a+1)*(n%m)+get(a)*(m-(n%m));
    else ans2=get(a)*m;
    cout<<ans2<<" "<<ans1<<'\n';
    return 0;
}
