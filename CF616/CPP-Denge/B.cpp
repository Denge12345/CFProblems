#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, m; cin >> n >> m;
    int ans = INT_MIN;
    // 将每一行的最小数值存入数组，然后选里面最大的
    for(int i = 1; i <= n; i++){
        int mi = INT_MAX;
        for(int j = 1; j <= m; j++){
            int a; cin >> a;
            mi = min(mi, a);
        }
        ans = max(ans, mi);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();	
	}
    return 0;
}