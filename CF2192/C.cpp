#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll a[N], pre[N], rightMax[N];

void solve(){
    ll n, h, k; cin >> n >> h >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) pre[i] = pre[i - 1] + a[i];
    ll sum = pre[n];
    // 整轮
    ll round = (h - 1) / sum;
    // 花费时间
    ll t = round * n + round * k;
    // 剩余血量
    h -= round * sum;
    if(h <= 0){
        cout << t << '\n';
        return;
    }
    rightMax[n] = a[n];
    for(int i = n - 1; i >= 1; i--){
        rightMax[i] = max(rightMax[i + 1], a[i]);
    }
    if(h <= pre[1]){
        cout << t + 1 << '\n';
        return;
    }
    if(n >= 2 && h <= rightMax[2]){
        cout << t + 1 << '\n';
        return;
    }
    ll leftMin = a[1];
    for(int i = 2; i < n; i++){
        leftMin = min(leftMin, a[i]);
        ll curSum = pre[i] - leftMin + rightMax[i + 1];
        if(h <= curSum || h <= pre[i]){
            cout << t + i << '\n';
            return;
        }
    }
    cout << t + n << '\n';
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