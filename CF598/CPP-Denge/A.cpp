#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

const int N = 4005;
int a[N];

void solve(){
	int n; cin >> n;
	ll sum = 1ll * n * (n + 1) / 2;
	for(int i = 1; i <= n; i <<= 1){
		sum -= 2 * i;
	}
	cout << sum << '\n';
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