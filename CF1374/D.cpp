#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k; cin >> n >> k;
    map<ll, ll> need;
    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        if(a % k != 0) need[k - (a % k)]++;
    }
    if(need.empty()){
        cout << 0 << '\n';
        return;
    }
    ll ans = 0;
    for(const auto& [r, c] : need){
        ans = max(ans, r + (c - 1) * k + 1);
    }
    cout << ans << '\n';
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