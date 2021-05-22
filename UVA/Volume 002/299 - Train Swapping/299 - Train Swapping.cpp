#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(0);*/
    int t;
    cin>>t;
    int train[55];
    while(t--){
        int l,s=0;cin>>l;
        for(int i=1;i<=l;i++)cin>>train[i];
        for(int i=1;i<=l;){
            if(i==l)break;
            else if(train[i]==i){
                i++;
            }
            else if(train[i]>i){
                int cur=i;
                while(train[cur]!=i &&cur<l){
                    swap(train[cur],train[cur+1]);
                    cur++;
                    s++;
                }
            }

        }
        for(int i=1;i<=l;i++)cout<<train[i]<<'\t';
        cout<<"Optimal train swapping takes "<<s<<" swaps.\n";
    }
    return 0;
}
