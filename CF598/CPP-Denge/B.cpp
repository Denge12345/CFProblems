#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s; cin >> s;
	int m; cin >> m;
	while(m--){
		int l, r, k; cin >> l >> r >> k;
		k %= (r - l + 1);
		string sub = s.substr(l - 1, r - l + 1);
		rotate(sub.begin(), sub.end() - k, sub.end());
		copy(sub.begin(), sub.end(), s.begin() + l - 1);
	}
	cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}