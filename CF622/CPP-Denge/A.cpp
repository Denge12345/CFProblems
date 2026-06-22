#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    ll l = 1, r = 2e9, ans = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(mid * (mid + 1) / 2 >= n){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout << n - ((ans - 1) * ans / 2) << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();
	}
    return 0;
}