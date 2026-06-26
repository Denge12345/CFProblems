#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s; cin >> s;
    ll ans = ((s[0] - '0') % 4 == 0 ? 1 : 0);
    for(int i = 1; i < s.size(); i++){
        int n1 = s[i - 1] - '0';
        int n2 = s[i] - '0';
        if(n2 % 4 == 0) ans++;
        if((n1 * 10 + n2) % 4 == 0) ans += i;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();
	}
    return 0;
}