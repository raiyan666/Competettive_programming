#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numNodes,numEdges;
    while((scanf("%d%d",&numNodes,&numEdges))!=EOF && numNodes)
    {
        char color[200];
        memset(color,'W',sizeof(color));
        vector <int> edges[200];
        for(int i=0;i<numEdges;i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        queue<int>Q;
        Q.push(0);
        color[0]='R';
        bool hobe=true;
        while(!Q.empty()){
            int u=Q.front();
            Q.pop();
            for(int i=0;i<(int)edges[u].size();i++){
                if(color[edges[u][i]]=='W'){
                    if(color[u]=='R')color[edges[u][i]]='B';
                    else color[edges[u][i]]='R';
                    Q.push(edges[u][i]);

                }
                if(color[edges[u][i]]==color[u]){
                    //cout<<u<<'\t'<<i<<'\n';
                    hobe=false;
                }
            }
        }
        if(hobe)cout<<"BICOLORABLE.\n";
        else cout<<"NOT BICOLORABLE.\n";
    }
    return 0;
}
