#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
const int INF = 2e9;
int dp[N];

void solve(){
    int n, m, k; cin >> n >> m >> k;
    string s; cin >> s;
    s = ' ' + s;
    for(int i = 1; i <= n + 1; i++) dp[i] = INF;
    for(int i = 0; i <= n; i++){
        if(dp[i] == INF) continue;
        if(i > 0 && s[i] != 'L') continue;
        for(int d = 1; d <= m; d++){
            int j = i + d;
            if(j > n + 1) break;
            if(j == n + 1 || s[j] == 'L'){
                dp[j] = min(dp[j], dp[i]);
            }else if(s[j] == 'W'){
                int p = j;
                while(p <= n && s[p] == 'W') p++;
                if(p == n + 1 || s[p] == 'L'){
                    int swim = p - j;
                    if(dp[i] + swim <= k){
                        dp[p] = min(dp[p], dp[i] + swim);
                    }
                }
            }
        }
    }
    cout << (dp[n + 1] <= k ? "YES" : "NO") << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}