#include <bits/stdc++.h>
using namespace std;

/*void solve(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ans = INT_MAX;
    for(int i = 0; i <= n; i++){
        int left = (n - i + m - 1) / m;
        ans = min(ans, i * a + left * b);
    }
    cout << ans << '\n';
}*/

void solve(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int k = n / m, r = n % m;
    cout << min(n * a, k * b + min(r * a, b)) << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}