#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;
ll a[N], pre1[N], pre2[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) pre1[i] = pre1[i - 1] + a[i];
    sort(a + 1, a + 1 + n);
    for(int i = 1; i <= n; i++) pre2[i] = pre2[i - 1] + a[i];
    int m; cin >> m;
    while(m--){
        int op, l, r; cin >> op >> l >> r;
        if(op == 1){
            cout << pre1[r] - pre1[l - 1] << '\n';
        }else{
            cout << pre2[r] - pre2[l - 1] << '\n';
        }
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