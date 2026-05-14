#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
vector<int> g[N];
vector<pair<int, int>> edges;
int color[N];

void solve(){
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) color[i] = -1;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        edges.push_back({u, v});
    }
    queue<int> q;
    q.push(1);
    color[1] = 1;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(const int y : g[x]){
            if(color[y] == -1){
                color[y] = 1 - color[x];
                q.push(y);
            }else if(color[y] == color[x]){
                cout << "NO" << '\n';
                return;
            }
        }
    }
    string ans;
    for(const auto& [u, v] : edges){
        if(color[u] == 0) ans += '0';
        else ans += '1';
    }
    cout << "YES" << '\n';
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}