#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <string> anagram;
    string inp;
    cin>>inp;
    sort(inp.begin(),inp.end());
    do{
        if(find(anagram.begin(),anagram.end(),inp)==anagram.end())
        {
            cout<<inp<<'\n';
            anagram.push_back(inp);
        }
    }while(next_permutation(inp.begin(),inp.end()));
    cout<<anagram.size()<<'\n';
    return 0;
}

