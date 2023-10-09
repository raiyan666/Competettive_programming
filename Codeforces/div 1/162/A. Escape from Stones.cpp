#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int arr[1000006];
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    string s;cin>>s;
    int st=1,en=(int)(s.size());
    for(int i=0;i<s.size();i++){
        if(s[i]=='r')arr[st++]=i;
        else {
            arr[en--]=i;
        //en--;
        }
        //cout<<i+1<<'\t';
    }
    for(int i=1;i<=s.size();i++)cout<<arr[i]+1<<'\n';

    return 0;
}
