#include <bits/stdc++.h>
using namespace std;

void solve(){
    char c; cin >> c;
    string target = "codeforces";
    cout << (target.find(c) != string::npos ? "YES" : "NO") << '\n';
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