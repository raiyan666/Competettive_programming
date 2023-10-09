#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        deque<int>con;
        queue<int>dis;
        for(int i=1;i<=n;i++)con.push_back(i);
        cout<<"Discarded cards:";
        while(n!=1){
                cout<<" "<<con.front();
                if(n!=2)cout<<",";
                con.pop_front();
            int x=con.front();
            con.push_back(x);
            con.pop_front();
            n--;
        }
        nl;
        cout<<"Remaining card: "<<con.front();nl;
        con.pop_front();
    }
    return 0;
}
