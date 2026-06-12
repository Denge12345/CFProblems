#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a, b, c, d;
    cin >> a >> b >> c >> d;
    string ans;
    for(int i = 1; i <= 12; i++){
        if(i == a || i == b) ans += 'a';
        if(i == c || i == d) ans += 'b';
    }
    cout << ((ans == "abab" || ans == "baba") ? "YES" : "NO") << '\n';
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