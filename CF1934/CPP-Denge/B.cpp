#include <bits/stdc++.h>
using namespace std;

const int N = 205;
int dp[N];

void init(){
    for(int i = 1; i <= 200; i++){
        dp[i] = dp[i - 1] + 1;
        if(i >= 3) dp[i] = min(dp[i], dp[i - 3] + 1);
        if(i >= 6) dp[i] = min(dp[i], dp[i - 6] + 1);
        if(i >= 10) dp[i] = min(dp[i], dp[i - 10] + 1);
    }
}

void solve(){
	int n; cin >> n;
    int minK = max(0, (n - 150) / 15);
    int maxK = n / 15;
    int ans = INT_MAX;
    for(int k = minK; k <= maxK; k++){
        int r = n - 15 * k;
        ans = min(ans, k + dp[r]);
    }
    cout << ans << '\n';
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