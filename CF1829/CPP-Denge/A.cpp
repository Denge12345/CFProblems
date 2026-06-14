#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	string s; cin >> s;
	string target = "codeforces";
	int ans = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != target[i]) ans++;
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