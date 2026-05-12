#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 9;
int a[N];

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int l = 1, ans = 1, minSum = INT_MAX, sum = 0;
    for(int i = 1; i < k; i++) sum += a[i];
    for(int r = k; r <= n; r++){
        sum += a[r];
        if(sum < minSum){
            minSum = sum;
            ans = l;
        }
        sum -= a[l++];
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}