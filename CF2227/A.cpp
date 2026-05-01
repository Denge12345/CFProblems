#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    cout << ((a % 2 != 0) && (b % 2 != 0) ? "NO" : "YES") << '\n';
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