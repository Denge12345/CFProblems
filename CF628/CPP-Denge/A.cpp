#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, b, p; cin >> n >> b >> p;
    int m = n, x = 0, y = n * p;
    while(m != 1){
        int k = 1;
        while(k * 2 <= m) k *= 2;
        int cnt = k / 2;
        x += cnt * (2 * b + 1);
        m = (m - k) + k / 2;
    }
    cout << x << ' ' << y << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();
	}
    return 0;
}