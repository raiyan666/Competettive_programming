#include <bits/stdc++.h>
using namespace std;
map<string,int>gamer;
int main()
{
    int n;
    scanf("%d",&n);
    string s;
    cin>>s;
    gamer["Anton"],gamer["Danik"];
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')gamer["Anton"]++;
        else gamer["Danik"]++;
    }
    if(gamer["Anton"]>gamer["Danik"])printf("Anton");
    else if(gamer["Anton"]==gamer["Danik"])printf("Friendship");
    else printf("Danik");
    printf("\n");
    return 0;
}
