#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
const int mod = 998244353;
ll a[N], b[N];

void solve(){
	int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    for(int i = 1; i <= n; i++) a[i] = a[i] * i * (n - i + 1);
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n, greater<ll>());
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ans = (ans + (a[i] % mod) * (b[i] % mod)) % mod;
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