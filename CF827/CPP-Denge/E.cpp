#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll a[N], h[N];

void solve(){
	int n, q; cin >> n >> q;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        h[i] = h[i - 1] + a[i];
        a[i] = max(a[i], a[i - 1]);
    }
    while(q--){
        int k; cin >> k;
        int l = 1, r = n, ans = 0;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(a[mid] <= k){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        cout << h[ans] << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
	cin >> t;
    while(t--){
        solve();
    }
    return 0;
}