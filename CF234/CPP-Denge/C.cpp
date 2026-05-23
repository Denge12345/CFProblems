#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; scanf("%lld", &n);
    vector<int> a(n + 1), pre(n + 2), suf(n + 2);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = 1; i <= n; i++){
        pre[i] = (a[i] >= 0 ? 1 : 0);
        pre[i] += pre[i - 1];
    }
    for(int i = n; i >= 1; i--){
        suf[i] = (a[i] <= 0 ? 1 : 0);
        suf[i] += suf[i + 1];
    }
    ll ans = INT_MAX;
    for(int i = 1; i <= n - 1; i++){
        ll cost = pre[i] + suf[i + 1];
        ans = min(ans, cost);
    }
    printf("%lld\n", ans);
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();	
	}
    return 0;
}