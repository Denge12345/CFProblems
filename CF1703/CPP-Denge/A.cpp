#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

void solve(){
	string s; cin >> s;
	if(s[0] != 'Y' && s[0] != 'y') cout << "NO" << '\n';
	else if(s[1] != 'E' && s[1] != 'e') cout << "NO" << '\n';
	else if(s[2] != 'S' && s[2] != 's') cout << "NO" << '\n';
	else cout << "YES" << '\n';
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