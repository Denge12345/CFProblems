#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
char mp[N][N];
int cnt[N][N], n, m;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(int i, int j){
    queue<pair<int, int>> q;
    q.push({i, j});
    vector<vector<bool>> vis(n + 1, vector<bool>(m + 1));
    vis[i][j] = true;
    int ans = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int k = 0; k < 4; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && !vis[nx][ny] && mp[nx][ny] == '.'){
                vis[nx][ny] = true;
                q.push({nx, ny});
                ans++;
            }
        }
    }
    return ans;
}

void solve(){
	cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> mp[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(mp[i][j] == '*'){
                cnt[i][j] = bfs(i, j);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(mp[i][j] == '*') cout << cnt[i][j] % 10;
            else cout << mp[i][j];
        }
        cout << '\n';
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