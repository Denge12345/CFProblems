#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int x = 0, y = 0;
    string s; cin >> s;
    bool ok = 0;
    for(char c : s){
        if(c == 'U') y++;
        else if(c == 'D') y--;
        else if(c == 'L') x--;
        else x++;
        if(x == 1 && y == 1){
            ok = 1;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
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