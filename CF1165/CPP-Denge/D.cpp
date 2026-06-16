#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
    vector<ll> a, d;
    for(int i = 1; i <= n; i++){
        ll x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    ll ans = a[0] * a[n - 1];
    for(ll i = 2; i * i <= ans; i++){
        if(ans % i == 0){
            d.push_back(i);
            if(i != ans / i){
                d.push_back(ans / i);
            }
        }
    }
    sort(d.begin(), d.end());
    cout << (a == d ? ans : -1) << '\n';
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