#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
const int INF = 1e9 + 7;
// dp[i][0] 表示以 i 结尾的最长上升子序列的最大值
// dp[i][1] 表示以 i 结尾的最长下降子序列的最小值
int dp[N][2], pre[N][2], a[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    dp[1][0] = INF, dp[1][1] = -INF;
    for(int i = 2; i <= n; i++){
        dp[i][0] = -INF, dp[i][1] = INF;
        if(dp[i - 1][0] != -INF && a[i] > a[i - 1]){
            dp[i][0] = dp[i - 1][0];
            pre[i][0] = 0;
        }
        if(dp[i - 1][1] != INF && a[i] > dp[i - 1][1]){
            if(a[i - 1] > dp[i][0]){
                dp[i][0] = a[i - 1];
                pre[i][0] = 1;
            }
        }
        if(dp[i - 1][1] != INF && a[i] < a[i - 1]){
            dp[i][1] = dp[i - 1][1];
            pre[i][1] = 1;
        }
        if(dp[i - 1][0] != -INF && a[i] < dp[i - 1][0]){
            if(a[i - 1] < dp[i][1]){
                dp[i][1] = a[i - 1];
                pre[i][1] = 0;
            }
        }
    }
    int cur = -1;
    if(dp[n][0] != -INF){
        cur = 0;
    }else if(dp[n][1] != INF){
        cur = 1;
    }else{
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
    vector<int> ans(n + 1);
    for(int i = n; i >= 1; i--){
        ans[i] = cur;
        cur = pre[i][cur];
    }
    for(int i = 1; i <= n; i++){
        cout << ans[i] << ' ';
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