#include <bits/stdc++.h>
#include <tuple>
using namespace std;
#define vi vector<int>
#define mp make_pair
#define ll long long
#define pb push_back
#define vvpi vector<vector<pair<int, int>>>

void solve() {
    int n;
    cin >> n;
    set<vector<int>> s0, s1;
    vi t(n);
    for(int i=0;i<n;i++)cin>>t[i];
    set<pair<int,int>>st;
    auto push=[&](int x,int y){
        if(st.find({x,y})!=st.end())
            return;
        s0.insert({2 + 3 * (x + y), x,y});

        s1.insert({2 + 3 * (x + y), 3 * x + 1, 3 * y + 1});
        s1.insert({3 + 3 * (x + y), 3 * x + 2, 3 * y + 1});
        s1.insert({3 + 3 * (x + y), 3 * x + 1, 3 * y + 2});
        s1.insert({6 + 3 * (x + y), 3 * x + 2, 3 * y + 2});
        st.insert({x,y});
    };
    push(0,0);
    push(0,1);
    push(1,0);

    for(int i=0;i<n;i++){
        if(t[i]==0){
            // auto [d,ax,ay]=*s0.begin();
            // s1.erase({d,ax,ay});
            // s0.erase({d,ax,ay});
            // cout<<ax<<' '<<ay<<'\n';
            auto v=*s0.begin();
            int x=v[1],y=v[2];
            s1.erase({2 + 3 * (x + y), 3 * x + 1, 3 * y + 1});
            s0.erase(v);
            cout<<3 * x + 1<<' '<< 3 * y + 1<<'\n';
            push(x+1,y);
            push(x+2,y);
            push(x,y+1);
            push(x,y+2);
            push(x+1,y+1);
        }
        else{
            auto v=*s1.begin();
            int x=v[1]/3,y=v[2]/3;
            s0.erase({2 + 3 * (x + y), x,y});
            s1.erase(v);
            cout<<v[1]<<' '<<v[2]<<'\n';
            push(x+1,y);
            push(x+2,y);
            push(x,y+1);
            push(x,y+2);
            push(x+1,y+1);

        }
        // if(t[i]==1){
        //     auto [d,ax,ay]= *s1.begin();
        //     s1.erase({d,ax,ay});
        //     s0.erase({d,ax,ay});
        //     cout<<ax<<' '<<ay<<'\n';
        // }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll t;
    cin >> t;
    
    
    while (t--) {
        solve();
    }
    return 0;
}