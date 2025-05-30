#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    //fast_in_out
    int t;
    string check="abacaba";
    //printf("%c ",check[1]);
    scanf("%d",&t);
    while(t--)
    {
        int n,q=0,x=0,start=0;
        string s;
        cin>>n;
        cin>>s;
        vector<int>con;
        for(int i=0;i<=n-7;i++)
        {
            bool value=false,hobe_na=false;
            for(int j=i,k=0;j<=i+7;j++,k++)
            {
                if(s[j]!=check[k]||s[j]!='?'){
                    hobe_na=true;
                    break;
                }
                if(s[i]=='?')value=true;
            }
            if(!hobe_na){
                x++;
                if(value){
                    q++;
                    if(q==1)start=i;
                }
            }
        }
        if(x==1)cout<<"Yes\nabacaba\n";
        else if(x-q==1){
            cout<<"Yes\n";
            for(int i=0;i<n;i++){
                if(s[i]=='?')cout<<'d';
                else cout<<s[i];
            }
            nl;
        }
        else if(q){
            for(int i=start,k=0;i<=start+7;i++,k++)s[i]=check[k];
            cout<<"Yes\n"<<s<<'\n';
        }
        else cout<<"No\n";
    }
    return 0;
}
