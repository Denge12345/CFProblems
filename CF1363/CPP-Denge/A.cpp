#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    int odd = 0, even = 0;
    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        if(a & 1) odd++;
        else even++;
    }
    int k = min(odd, x);
    if(k % 2 == 0) k--;
    if(k > 0 && x - k <= even) cout << "Yes" << '\n';
    else cout << "No" << '\n';
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