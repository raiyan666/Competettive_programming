#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    n++;
    //printf("%d\n",n);
    set<int>con;
    while(1)
    {
        int x=n;
        con.insert(x%10);
        x/=10;
        con.insert(x%10);
        x/=10;
        con.insert(x%10);
        x/=10;
        con.insert(x);
        if(con.size()==4){
            printf("%d\n",n);
            return 0;
        }
        con.clear();
        n++;
    }
    return 0;
}
