#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll INF=1e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,n;
    if(!(cin>>m>>n)) return 0;
    vector<vector<ll>> a;
    a.assign(m,vector<ll>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int total=m*n;
    vector<ll> dist;
    dist.assign(total,INF);
    typedef pair<ll,int> P;
    priority_queue<P,vector<P>,greater<P>> pq;
    int src=0;
    dist[src]=a[0][0];
    pq.push(P(dist[src],src));
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    while(!pq.empty()){
        ll d=pq.top().first;
        int u=pq.top().second;
        pq.pop();
        if(d!=dist[u]) continue;
        int ux=u/n;
        int uy=u%n;
        for(int k=0;k<4;k++){
            int vx=ux+dx[k];
            int vy=uy+dy[k];
            if(vx<0||vx>=m||vy<0||vy>=n) continue;
            int v=vx*n+vy;
            ll nd=dist[u]+a[vx][vy];
            if(nd<dist[v]){
                dist[v]=nd;
                pq.push(P(dist[v],v));
            }
        }
    }
    int target=(m-1)*n+(n-1);
    if(dist[target]==INF) cout<<"-1\n";
    else cout<<dist[target]<<"\n";

    return 0;
}
