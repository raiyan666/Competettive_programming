    #include <bits/stdc++.h>
    using namespace std;

    #define vi vector<int>
    #define vvpi vector<vector<pair<int,int>>>
    #define ll long long
    #define mp make_pair
    #define pb push_back
    const long long inf=1e18;
    ll horizontal(ll n,vector<vector<ll> >& h,vector<ll> a){
        vector<vector<ll> >dp(n,vector<ll> (2,inf));
        dp[0][0]=0;
        dp[0][1]=a[0];
        for(ll i=1;i<n;i++){
            for(ll x=0;x<2;x++){ 
                for(ll y=0;y<2;y++){
                    bool ok = true ;
                    for(ll j=0;j<n;j++){
                        ok &= (h[i - 1][j] + y != h[i][j] + x);
                    }
                    if(ok){
                        if(x==0){
                            dp[i][x]=min(dp[i][x],dp[i-1][y]);
                        }
                        if(x==1){
                            dp[i][x]=min(dp[i][x],dp[i-1][y]+a[i]);
                        }   
                    }
                }
            }
        }

        return min(dp[n-1][0],dp[n-1][1]) ;
    }
    void transpose(ll n,vector<vector<ll>>& h){
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                swap(h[i][j],h[j][i]);
            }
        }
    }
    void solve() {
        // Your solution code here
        ll n;
        cin>>n;
        vector<vector<ll> >h(n,vector<ll>(n));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++)cin>>h[i][j];
        }
        vector<ll>row(n),col(n);
        for(ll i=0;i<n;i++)cin>>row[i];
        for(ll i=0;i<n;i++)cin>>col[i];
        ll cost1=horizontal(n,h,row);
        transpose(n,h);
        ll cost2=horizontal(n,h,col);
        ll cost=cost1+cost2;
        if(cost>=inf){
            cout<<-1<<'\n';
        }
        else{
            cout<<cost<<'\n';
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