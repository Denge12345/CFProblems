#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll k, n, a, b;

bool check(ll x){
    // 直接玩 x 关
    ll leftpower = k - x * a;
    ll leftn = n - x;
    if(leftpower <= leftn * b) return false;
    return true;
}

void solve(){
    int q; cin >> q;
    while(q--){
        cin >> k >> n >> a >> b;
        ll l = 0, r = n, ans = -1;
        while(l <= r){
            ll mid = l + (r - l) / 2;
            if(check(mid)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        cout << ans << '\n';
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