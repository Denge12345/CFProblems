#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
    int mx = INT_MIN, mi = INT_MAX;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        mx = max(mx, x);
        mi = min(mi, x);
    }
    cout << mx + 1 - mi << '\n';
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