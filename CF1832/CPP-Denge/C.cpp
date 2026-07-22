#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
    vector<ll> a;
    for(int i = 1; i <= n; i++){
        ll x; cin >> x;
        if(a.empty() || a.back() != x) a.push_back(x);
    }
    int m = a.size();
    if(m <= 2){
        cout << m << '\n';
        return;
    }
    int ans = 2;
    for(int i = 1; i < m - 1; i++){
        ll d1 = a[i] - a[i - 1];
        ll d2 = a[i + 1] - a[i];
        if(d1 * d2 < 0) ans++;
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