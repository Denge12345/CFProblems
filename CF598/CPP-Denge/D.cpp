#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> memo;

bool check(int x, int y, int n, int m){
    return x >= 1 && x <= n && y >= 1 && y <= m;
}

int dfs(vector<vector<char>>& mp, int x, int y, vector<vector<bool>>& vis, int n, int m, vector<pair<int, int>>& path){
    if(!check(x, y, n, m) || vis[x][y]){
        return 0;
    }
    if(mp[x][y] == '*' && vis[x][y] == 0){
        return 1;
    }
    vis[x][y] = 1;
    path.push_back({x, y});
    return dfs(mp, x + 1, y, vis, n, m, path) + dfs(mp, x - 1, y, vis, n, m, path) + dfs(mp, x, y + 1, vis, n, m, path) + dfs(mp, x, y - 1, vis, n, m, path);
}

void solve(){
	int n, m, k; cin >> n >> m >> k;
    vector<vector<char>> mp(n + 1, vector<char>(m + 1));
    vector<vector<bool>> vis(n + 1, vector<bool>(m + 1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> mp[i][j];
        }
    }
    while(k--){
        int x, y; cin >> x >> y;
        vector<pair<int, int>> path;
        if(vis[x][y]){
            cout << memo[{x, y}] << '\n';
        }else{
            int ans = dfs(mp, x, y, vis, n, m, path);
            for(auto& p : path){
                memo[p] = ans;
            }
            cout << ans << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}