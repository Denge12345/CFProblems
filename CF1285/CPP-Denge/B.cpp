#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll a[N];

ll f(int l, int r){
    ll cur = 0, best = a[l];
    for(int i = l; i <= r; i++){
        cur = max(a[i], cur + a[i]);
        best = max(best, cur);
    }
    return best;
}

void solve(){
	int n; cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    ll max1 = f(1, n - 1);
    ll max2 = f(2, n);
    cout << ((sum > max1 && sum > max2) ? "YES" : "NO") << '\n';
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