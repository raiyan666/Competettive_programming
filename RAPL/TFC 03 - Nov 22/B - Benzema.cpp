#include<iostream>
#include<algorithm>
#include <fstream>
using namespace std;
int main(){
    int n,k,g,b;
    //ifstream fr("B - Benzema.txt");
    cin>>n>>k>>g>>b;
    //fr.close();
    
    if(b>g){
        if(b>g*(k+1))cout<<"NO";
        else{
            int sum=b-g;
            for(int i=1;i<=sum;i++){
               int inter=k;
               while(inter--){
                cout<<"B";
                b--;
               }
               if(g){
                    cout<<"G";
                    g--;
                    //break;
               }
               //g--;
            }
            while(b--){
                cout<<"B";
                if(g){
                    cout<<"G";
                    g--;
                    //break;
                }
            }
        }
    }
    else{
        if(g>b*(k+1))cout<<"NO";
        else{
            int sum=g-b;
            for(int i=1;i<=sum;i++){
               int inter=k;
               while(inter--){
                cout<<"G";
                g--;
               }
               if(b){
                cout<<"B";
                b--;
                //break;
               }
               
            }
            while(g--){
                cout<<"G";
                if(b){
                    cout<<"B";
                    b--;
                    //break;
                }
            }

        }

    }
    cout<<'\n';
    return 0;
}