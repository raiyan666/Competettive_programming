#include<bits/stdc++.h>
using namespace std;
void rep(){
        int row,col;
        cin>>row>>col;
        vector<vector<char>> arr(row + 1, vector<char>(col + 1));
        vector<vector<int>> rowsum(row + 1, vector<int>(col + 1, 0));
        vector<vector<int>> colsum(row + 1, vector<int>(col + 1, 0));

        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                cin>>arr[i][j];
                rowsum[i][j]=rowsum[i][j-1];
                colsum[i][j]=colsum[i-1][j];
                if(arr[i][j]=='1'){
                    rowsum[i][j]+=1;
                    colsum[i][j]+=1;                
                }
                // cout<<colsum[j][i]<<" ";
            }
        }
        for (int i = 1; i <= row; i++){
            for (int j = 1; j <= col; j++){
                if(arr[i][j]=='1'){
                    if(rowsum[i][j]==j || colsum[i][j]==i)continue;
                    cout<<"NO\n";
                    return;
                //     // b=true;
                }
            }
            
        }
        cout<<"YES\n";
        return;

}
int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        rep();
    }
    return 0;
}