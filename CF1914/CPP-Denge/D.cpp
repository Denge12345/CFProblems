#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;
const ll INF = 1e18;
ll a[N], b[N], c[N];

void solve(){
	int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    for(int i = 1; i <= n; i++) cin >> c[i];
    vector<vector<ll>> dp(n + 1, vector<ll>(8, -INF));
    dp[0][0] = 0;
    for(int i = 1; i <= n; i++){
        vector<ll> v = {a[i], b[i], c[i]};
        for(int status = 0; status < 8; status++){
            dp[i][status] = dp[i - 1][status];
        }
        for(int status = 0; status < 8; status++){
            if(dp[i - 1][status] == -INF) continue;
            for(int j = 0; j < 3; j++){
                if(!(status & (1 << j))){
                    int nxt = status | (1 << j);
                    dp[i][nxt] = max(dp[i][nxt], dp[i - 1][status] + v[j]);
                }
            }
        }
    }
    cout << dp[n][7] << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
    	solve();	
	}
    return 0;
}