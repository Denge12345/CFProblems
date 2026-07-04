#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k; cin >> n >> k;
    ll ans = 0;
    for(int b = 0; (1ll << b) <= n; b++){
        ll cost = 1ll << b;
        ll cnt = min(k, n / cost);
        ans += cnt;
        n -= cnt * cost;
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