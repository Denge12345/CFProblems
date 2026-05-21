#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll a[N];

void solve(){
	// 存在 i, j 使得 (sum - a[i] - a[j]) / (n - 2) = sum / n;
    // sum - a[i] - a[j] = (n - 2) * sum / n;
    // sum - (n - 2) * sum / n = a[i] + a[j];
    // sum - ((n * sum) / n - 2 * sum / n) = a[i] + a[j];
    // sum - sum + 2 * sum / n = a[i] + a[j];
    // 2 * sum / n = a[i] + a[j];
    int n; cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if((2 * sum) % n != 0){
        cout << 0 << '\n';
        return;
    }
    ll target = (2 * sum) / n;
    map<ll, int> mp;
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        if(mp.count(target - a[i])){
            ans += mp[target - a[i]];
        }
        mp[a[i]]++;
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