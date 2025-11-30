#include <bits/stdc++.h>
using namespace std;

void dfs_go(int u, vector<int>& vis, vector<vector<int>>& adj){
    vis[u]=1;
    for(int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        if(!vis[v]) dfs_go(v,vis,adj);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    if(!(cin>>n>>m)) return 0;
    vector<vector<int>> adj;
    adj.assign(n,{});
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> vis;
    vis.assign(n,0);
    int comp=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            comp++;
            dfs_go(i,vis,adj);
        }
    }
    cout<<comp<<"\n";
    return 0;
}
