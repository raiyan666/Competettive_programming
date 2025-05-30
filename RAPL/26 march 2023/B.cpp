#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    long long int n,k;
    cin>>n>>k;
    //cout<<n<<'\t'<<k<<'\n';
    vector<long long int>divisor;
    //long long int x=1;
    for(long long int i=1;i*i<=n;i++){
        if(n%i==0){
            divisor.push_back(i);
            if(i*i!=n)divisor.push_back(n/i);
        }
        
    }
    if(divisor.size()<k){
        cout<<"-1\n";
        return 0;
    }
    sort(divisor.begin(),divisor.end());
    cout<<divisor[k-1]<<'\n';
    return 0;
    
}
