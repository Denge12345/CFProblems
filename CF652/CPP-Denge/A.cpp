#include <bits/stdc++.h>
using namespace std;

void solve(){
    int h1, h2; cin >> h1 >> h2;
    int a, b; cin >> a >> b;
    int cur = h1 + 8 * a;
    if(cur >= h2){
        cout << 0 << '\n';
        return;
    }
    if(a <= b){
        cout << -1 << '\n';
        return;
    }
    cur -= 12 * b;
    int ans = 1;
    while(true){
        if(cur + 12 * a >= h2){
            cout << ans << '\n';
            return;
        }
        cur += 12 * (a - b);
        ans++;
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