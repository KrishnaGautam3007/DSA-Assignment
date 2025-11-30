#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll INF=1e18;
struct Edge{
    int a,b;
    ll w;
};
struct DSU{
    vector<int> parent,rankv;
    DSU(int n=0){
        parent.resize(n);
        rankv.assign(n,0);
        for(int i=0;i<n;i++) parent[i]=i;
    }
    int find_set(int x){
        if(parent[x]==x) return x;
        return parent[x]=find_set(parent[x]);
    }
    bool unite(int x,int y){
        x=find_set(x);
        y=find_set(y);
        if(x==y) return false;
        if(rankv[x]<rankv[y]) swap(x,y);
        parent[y]=x;
        if(rankv[x]==rankv[y]) rankv[x]++;
        return true;
    }
};
int n,m;
vector<vector<int>> adj;
vector<vector<pair<int,ll>>> adjW;
vector<int> bfs(int start){
    vector<int> dist(n,-1);
    queue<int> q;
    dist[start]=0;
    q.push(start);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i];
            if(dist[v]==-1){
                dist[v]=dist[u]+1;
                q.push(v);
            }
        }
    }
    return dist;
}
void dfs_go(int u,vector<int>& vis,vector<int>& out){
    vis[u]=1;
    out.push_back(u);
    for(int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        if(!vis[v]) dfs_go(v,vis,out);
    }
}
vector<int> dfs(int start){
    vector<int> vis(n,0),out;
    dfs_go(start,vis,out);
    return out;
}
pair<ll,vector<Edge>> kruskal(vector<Edge> edges){
    sort(edges.begin(),edges.end(),[](Edge&p,Edge&q){
        return p.w<q.w;
    });
    DSU dsu(n);
    ll total=0;
    vector<Edge> tree;
    for(int i=0;i<edges.size();i++){
        if(dsu.unite(edges[i].a,edges[i].b)){
            tree.push_back(edges[i]);
            total+=edges[i].w;
        }
    }
    return {total,tree};
}
pair<ll,vector<pair<int,int>>> prim(int start){
    vector<ll> cost(n,INF);
    vector<int> parent(n,-1);
    vector<int> used(n,0);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    cost[start]=0;
    pq.push({0,start});
    while(!pq.empty()){
        ll w=pq.top().first;
        int u=pq.top().second;
        pq.pop();
        if(used[u]) continue;
        used[u]=1;
        for(int i=0;i<adjW[u].size();i++){
            int v=adjW[u][i].first;
            ll wt=adjW[u][i].second;

            if(!used[v]&&wt<cost[v]){
                cost[v]=wt;
                parent[v]=u;
                pq.push({cost[v],v});
            }
        }
    }
    ll total=0;
    vector<pair<int,int>> tree;
    for(int i=0;i<n;i++){
        if(parent[i]!=-1){
            total+=cost[i];
            tree.push_back({parent[i],i});
        }
    }
    return {total,tree};
}
vector<ll> dijkstra(int start){
    vector<ll> dist(n,INF);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    dist[start]=0;
    pq.push({0,start});
    while(!pq.empty()){
        ll d=pq.top().first;
        int u=pq.top().second;
        pq.pop();
        if(d!=dist[u]) continue;
        for(int i=0;i<adjW[u].size();i++){
            int v=adjW[u][i].first;
            ll w=adjW[u][i].second;
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
    return dist;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    adj.assign(n,{});
    adjW.assign(n,{});
    vector<Edge> edges;
    for(int i=0;i<m;i++){
        int x,y;
        ll w;
        cin>>x>>y>>w;
        adj[x].push_back(y);
        adj[y].push_back(x);
        adjW[x].push_back({y,w});
        adjW[y].push_back({x,w});
        edges.push_back({x,y,w});
    }
    int start=0;
    vector<int> bf=bfs(start);
    cout<<"BFS\n";
    for(int i=0;i<n;i++) cout<<i<<" "<<bf[i]<<"\n";
    vector<int> df=dfs(start);
    cout<<"\nDFS\n";
    for(int i=0;i<df.size();i++) cout<<df[i]<<" ";
    cout<<"\n\n";
    auto k=kruskal(edges);
    cout<<"Kruskal MST weight: "<<k.first<<"\n";
    for(int i=0;i<k.second.size();i++){
        cout<<k.second[i].a<<" "<<k.second[i].b<<" "<<k.second[i].w<<"\n";
    }
    auto p=prim(start);
    cout<<"\nPrim MST weight: "<<p.first<<"\n";
    for(int i=0;i<p.second.size();i++){
        cout<<p.second[i].first<<" "<<p.second[i].second<<"\n";
    }
    vector<ll> dj=dijkstra(start);
    cout<<"\nDijkstra\n";
    for(int i=0;i<n;i++){
        if(dj[i]==INF) cout<<i<<" INF\n";
        else cout<<i<<" "<<dj[i]<<"\n";
    }
    return 0;
}
