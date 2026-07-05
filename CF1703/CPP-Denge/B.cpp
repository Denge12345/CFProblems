#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

void solve(){
    int n; cin >> n;
	string s; cin >> s;
    int ans = 0;
    vector<bool> vis(26);
    for(char c : s){
        if(!vis[c - 'A']){
            vis[c - 'A'] = true;
            ans += 2;
        }else{
            ans += 1;
        }
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