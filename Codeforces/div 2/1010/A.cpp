#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        char a[m][n];
        int row[m]={0},col[n]={0};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                if(a[i][j]=='1'){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        
        for(int i=0;i<m;i++)cout<<row[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)cout<<col[i]<<" ";
        cout<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

            }
        }
    }
    return 0;
}