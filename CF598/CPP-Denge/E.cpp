#include <bits/stdc++.h>
using namespace std;

const int N = 55;
const int INF = 1e9;
int dp[N][N][N];
// dp[i][j][k] 表示一个 i * j 的巧克力中，通过若干次切割，最终选出面积恰好为 k 的最小代价

void init(){
    for(int i = 0; i <= 30; i++){
        for(int j = 0; j <= 30; j++){
            for(int k = 0; k <= 50; k++){
                dp[i][j][k] = INF;
            }
        }
    }
    for(int i = 1; i <= 30; i++){
        for(int j = 1; j <= 30; j++){
            int maxK = min(i * j, 50);
            dp[i][j][0] = 0;
            if(maxK == i * j) dp[i][j][maxK] = 0;
            for(int k = 1; k <= maxK; k++){
                if(k == i * j) continue;
                int& res = dp[i][j][k];
                for(int r = 1; r < i; r++){
                    for(int s = 0; s <= k; s++){
                        int cost = j * j + dp[r][j][s] + dp[i - r][j][k - s];
                        res = min(res, cost);
                    }
                }
                for(int c = 1; c < j; c++){
                    for(int s = 0; s <= k; s++){
                        int cost = i * i + dp[i][c][s] + dp[i][j - c][k - s];
                        res = min(res, cost);
                    }
                }
            }
        }
    }
}

void solve(){
	int n, m, k; cin >> n >> m >> k;
    cout << dp[n][m][k] << '\n';
}

int main() {
    init();
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}