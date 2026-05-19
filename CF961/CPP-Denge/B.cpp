#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;
int a[N], t[N];

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> t[i];
    ll ans = 0, sum = 0, maxSum = 0;
    for(int i = 1; i <= n; i++){
        if(t[i]) ans += a[i];
    }
    int r = 1;
    while(r < k){
        if(!t[r]) sum += a[r];
        r++;
    }
    while(r <= n){
        if(!t[r]) sum += a[r];
        maxSum = max(maxSum, sum);
        int l = r - k + 1;
        if(!t[l]) sum -= a[l];
        r++;
    }
    cout << ans + maxSum << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}