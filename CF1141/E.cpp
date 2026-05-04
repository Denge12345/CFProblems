#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll a[N];

void solve(){
    ll H; cin >> H;
    int n; cin >> n;
    ll sum = 0, mx = 0, h = H;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum -= a[i];
        h += a[i];
        if(h <= 0){
            cout << i + 1 << '\n';
            return;
        }
        mx = max(mx, sum);
    }
    if(sum <= 0){
        cout << -1 << '\n';
        return;
    }
    ll t = (H - mx) / sum;
    H -= t * sum;
    ll ans = t * n;
    for(int i = 0; ; i++){
        H += a[i % n];
        ans++;
        if(H <= 0){
            cout << ans << '\n';
            return;
        }
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