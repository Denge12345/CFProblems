#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
    int cnt0 = 0;
    vector<int> cnt(32);
    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        if(a == 0){
            cnt0++;
        }else{
            int high1 = 31 - __builtin_clz(a);
            cnt[high1]++;
        }
    }
    ll ans = (1ll * cnt0 * (cnt0 - 1)) / 2;
    for(int i = 0; i < 32; i++){
        ans += (1ll * cnt[i] * (cnt[i] - 1)) / 2;
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