#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> mp(26, -1);
    for(int i = 0; i < n; i++){
        int c = s[i] - 'a';
        int p = i & 1;
        if(mp[c] == -1){
            mp[c] = p;
        }else if(mp[c] != p){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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