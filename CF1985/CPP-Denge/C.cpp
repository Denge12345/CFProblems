#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int a[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0, preMax = 0;
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i];
        preMax = max(preMax, a[i]);
        if(sum - preMax == preMax){
            ans++;
        }
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