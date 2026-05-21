#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, x, y; cin >> a >> x >> y;
    if(y % a == 0 || y < 0 || abs(x) >= a){
        cout << -1 << '\n';
        return;
    }
    int k = y / a;
    if(k == 0 || k % 2 == 1){
        if(abs(2 * x) < a) cout << max(1, (3 * k + 1) / 2) << '\n';
        else cout << -1 << '\n';
    }else if(k % 2 == 0){
        if(x != 0) cout << k / 2 * 3 + (x + a) / a << '\n';
        else cout << -1 << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}