#include<bits/stdc++.h>
using namespace std;
int main(){
    //while(1){
    int n;
    bool ans=1; 
    cin>>n;
    char b[25][25];
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cin>>b[row][col];
        }
    }
    
    for(int row=0;row<n;row++){
        int black=0;
        for(int col=0;col<n;col++){
            if(b[row][col]=='B')black++;
            //cout<<b[row][col];
        }
        //cout<<black<<endl;
        if(black!=(n/2)){
            ans=0;
        }
        black=0;
        for(int col=0;col<n;col++){
            if(b[col][row]=='B')black++;
        }
        if(black!=(n/2)){
            ans=0;
        }
    }
    if(ans)ans=1;
    else ans=0;
    if(n>2){
        for(int row=0;row<n;row++){
            for(int col=1;col+1<n;col++){
                if(b[row][col-1]=='W'&&b[row][col]=='W'&&b[row][col+1]=='W')ans=0;
                if(b[row][col-1]=='B'&&b[row][col]=='B'&&b[row][col+1]=='B')ans=0;
            }
            
        }
        for(int row=1;row+1<n;row++){
            for(int col=0;col<n;col++){
                if(b[row-1][col]=='W'&&b[row][col]=='W'&&b[row+1][col]=='W')ans=0;
                if(b[row-1][col]=='B'&&b[row][col]=='B'&&b[row+1][col]=='B')ans=0;
            }
        }
        
    }
    
    cout<<ans<<"\n";
    //}

    return 0;
}