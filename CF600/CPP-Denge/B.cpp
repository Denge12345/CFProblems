#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N];
pair<int, int> b[N];
int ans[N];

void solve(){
	int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++){
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    for(int i = 1; i <= m; i++){
        ans[b[i].second] = upper_bound(a + 1, a + n + 1, b[i].first) - a - 1;
    }
    for(int i = 1; i <= m; i++){
        cout << ans[i] << ' ';
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}