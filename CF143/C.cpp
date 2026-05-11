#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    vector<ll> div;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            div.push_back(i);
            if(i * i != n) div.push_back(n / i);
        }
    }
    ll mx = LLONG_MIN, mi = LLONG_MAX;
    for(ll x : div){
        ll m = n / x;
        for(ll y : div){
            if(m % y != 0) continue;
            ll z = m / y;
            ll s = (x + 1) * (y + 2) * (z + 2) - n;
            mi = min(mi, s), mx = max(mx, s);
         }
    }
    cout << mi << ' ' << mx << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}