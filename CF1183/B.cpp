#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;
ll a[N];

void solve(){
    int n, k; cin >> n >> k;
    ll mi = INT_MAX;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mi = min(mi, a[i]);
    }
    ll B = mi + k;
    bool ok = 1;
    for(int i = 1; i <= n; i++){
        if(abs(a[i] - B) > k){
            ok = 0;
            break;
        }
    }
    cout << (ok ? B : -1) << '\n';
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