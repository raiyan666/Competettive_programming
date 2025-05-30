/*/*শুধু সে ভুল ভাবনায়
যেতে চাইলে যাও চলে যাও
তবু কেনো এ কান্না?
জানি ভালো থাকতে
শুধু বলোনা ভুলতে
চাইনা বাঁচার উপদেশ
দিন এমনই কাটবে
খেয়ালের ফাঁদে

তোমাকে মনে পরবে
যখনই জোছনা হাসে
তোমাকে মনে পরবে
যখনই আকাশ ভেঙে বর্ষা কাঁদে

যেই মোহের বন্যায়
ভেসে যাওয়া ধন্য হলে
তাতে পারিনি ভাসতে
অস্তিত্ব ভুলে, ভুলে

তাই বলোনা চলতে
স্থবিরতাই সঙ্গী হলে
মন পোড়াই থাকলে
হতাশার ফাঁদে

তোমাকে মনে পরবে
যখনই জোছনা হাসে
তোমাকে মনে পরবে
যখনই আকাশ ভেঙে বর্ষা কাঁদে

যে যায় যাওয়ার পথে দেয়াল হবার কোন স্বপ্ন নাই
যতই কাঁদাও আমায়
চলি একা পথে

তোমাকে মনে পরবে
যখনই জোছনা হাসে
তোমাকে মনে পরবে
যখনই আকাশ ভেঙে বর্ষা কাঁদে

তোমাকে মনে পরবে
যখনই জোছনা হাসে
তোমাকে মনে পড়বে
যখনই বর্ষা কাদে

তোমাকে মনে পরবে
যখনই জোছনা হাসে
তোমাকে মনে পরবে
যখনই আকাশ ভেঙে বর্ষা কাঁদে
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
int main()
{
    vector<pair<int,int>> con;
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    int a,b=0,x;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        con.pb(mp(b,a));
    }
    sort(con.begin(),con.end());
    for(int i=0;i<t-1;i++)
    if(con[i+1].ss<con[i].ss){
        cout<<"Happy Alex\n";
        return 0;
    }

    cout<<"Poor Alex\n";
    return 0;
}
