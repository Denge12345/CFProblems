#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int M = 1e5 + 9;
ll a[2][M], p1[M], p2[M], mi[M], mx[M];

void solve(){
	int m; cin >> m;
    for(int i = 1; i <= m; i++) cin >> a[0][i];
    for(int i = 1; i <= m; i++) cin >> a[1][i];
    for(int i = 1; i <= m; i++){
        p1[i] = p1[i - 1] + a[0][i];
        p2[i] = p2[i - 1] + a[1][i];
    }
    for(int i = 1; i <= m; i++){
        mi[i] = min(mi[i - 1], p2[i]);
    }
    mx[m + 1] = -1e18;
    for(int i = m; i >= 1; i--){
        mx[i] = max(mx[i + 1], p1[i]);
    }
    ll ans = 1e18;
    for(int i = 1; i <= m; i++){
        ll s1 = 0, s2 = 0;
        if(i >= 2) s1 = p2[i - 1] - mi[i - 2];
        if(i + 1 <= m) s2 = mx[i + 1] - p1[i];
        ans = min(ans, max({0ll, s1, s2}));
    }
    cout << ans << '\n';
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