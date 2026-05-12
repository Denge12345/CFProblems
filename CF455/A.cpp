#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;
// dp[i] 表示考虑 1..n 中的数, 能获得的最大得分
ll cnt[N], dp[N];

void solve(){
    int n; cin >> n;
    int mx = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        cnt[x]++;
        mx = max(mx, x);
    }
    dp[0] = 0;
    dp[1] = cnt[1];
    for(int i = 2; i <= mx; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i] * i);
    }
    cout << dp[mx] << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}