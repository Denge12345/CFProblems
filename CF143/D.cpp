#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m; cin >> n >> m;
    if(min(n, m) == 1){
        cout << n * m << '\n';
    }else if(min(n, m) == 2){
        int c = max(n, m);
        cout << (c / 4) * 4 + 2 * min(2, c % 4) << '\n';
    }else{
        cout << (n * m + 1) / 2 << '\n';
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