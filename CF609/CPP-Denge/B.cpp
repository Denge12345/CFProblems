#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 15;
int cnt[N];

void solve(){
	int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        cnt[x]++;
    }
    ll ans = 0;
    for(int i = 1; i <= m; i++){
        for(int j = i + 1; j <= m; j++){
            ans += 1LL * cnt[i] * cnt[j];
        }
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