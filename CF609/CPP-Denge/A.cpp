#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, m; cin >> n >> m;
    priority_queue<int> pq;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        pq.push(x);
    }
    int ans = 0;
    while(m){
        m = max(0, m - pq.top());
        pq.pop();
        ans++;
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