#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
    map<int, int> mp;
    int ok = 1;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(mp[x] != 0){
            ok = 0;
        }
        mp[x]++;
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