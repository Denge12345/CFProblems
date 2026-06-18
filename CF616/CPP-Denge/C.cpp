#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
char mp[N][N];
int id[N][N], sz[N * N], n, m;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y, int cur){
    id[x][y] = cur;
    sz[cur]++;
    for(int k = 0; k < 4; k++){
        int nx = x + dx[k], ny = y + dy[k];
        if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && mp[nx][ny] == '.' && !id[nx][ny]){
            dfs(nx, ny, cur);
        }
    }
}

void solve(){
	cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> mp[i][j];
        }
    }
    for(int i = 1, cnt = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(mp[i][j] == '.' && !id[i][j]){
                dfs(i, j, cnt);
                cnt++;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(mp[i][j] == '*'){
                int ans = 1;
                set<int> vis;
                for(int k = 0; k < 4; k++){
                    int ni = i + dx[k], nj = j + dy[k];
                    if(ni >= 1 && ni <= n && nj >= 1 && nj <= m && mp[ni][nj] == '.'){
                        int cur = id[ni][nj];
                        if(!vis.count(cur)){
                            ans += sz[cur];
                            vis.insert(cur);
                        }
                    }
                }
                cout << ans % 10;
            }else{
                cout << '.';
            }
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