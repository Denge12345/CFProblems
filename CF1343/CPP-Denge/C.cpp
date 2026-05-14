#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int a[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    ll ans = 0;
    int l = 1;
    while(l <= n){
        int r = l;
        while(r + 1 <= n && (a[l] < 0 == a[r + 1] < 0)) r++;
        int mx = INT_MIN;
        for(int i = l; i <= r; i++){
            mx = max(mx, a[i]);
        }
        ans += mx;
        l = r + 1;
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