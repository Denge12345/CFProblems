#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    int ans = INT_MAX;
    for(int c = a; c <= b; c++){
        ans = min(ans, (c - a) + (b - c));
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}