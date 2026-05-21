#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int a[N], b[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i];
        b[i] = (a[i] == 1 ? -1 : 1);
    }
    int cur = 0, ans = INT_MIN;
    for(int i = 1; i <= n; i++){
        cur = max(b[i], cur + b[i]);
        ans = max(ans, cur);
    }
    cout << sum + ans << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}