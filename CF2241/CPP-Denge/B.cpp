#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s; cin >> s;
    int len = s.size();
    ll ans = 1;
    for(int i = 0; i < len; i++) ans *= 10;
    ans += 1;
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