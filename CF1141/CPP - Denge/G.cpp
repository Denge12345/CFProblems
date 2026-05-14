#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
vector<int> g[N];
int n, k;
map<pair<int, int>, int> col;

bool check(int r){
    int res = 0;
    for(int i = 1; i <= n; i++){
        if(g[i].size() > r) res++;
    }
    return res <= k;
}

void dfs(int x, int fa, int r, int fc){
    int color = 1;
    for(const int& y : g[x]){
        if(y == fa) continue;
        if(color == fc) color++;
        if(color > r) color = 1;
        int u = min(x, y);
        int v = max(x, y);
        col[{u, v}] = color;
        dfs(y, x, r, color);
        color++;
    }
}

void solve(){
    cin >> n >> k;
    vector<pair<int, int>> e;
    for(int i = 1; i <= n - 1; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        e.push_back({min(u, v), max(u, v)});
    }
    int l = 1, r = n, ans = 0;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(check(mid)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    dfs(1, 0, ans, 0);
    cout << ans << '\n';
    for(int i = 0; i < e.size(); i++){
        cout << col[{e[i].first, e[i].second}] << ' ';
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}