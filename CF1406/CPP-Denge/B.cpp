#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll a[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    set<int> idx;
    for(int i = 1; i <= min(n, 5); ++i) idx.insert(i);
    for(int i = n; i >= max(1, n - 4); --i) idx.insert(i);
    vector<ll> arr;
    for(int i : idx) arr.push_back(a[i]);
    ll ans = LLONG_MIN;
    int m = arr.size();
    for(int i = 0; i < m; i++){
        for(int j = i + 1; j < m; j++){
            for(int k = j + 1; k < m; k++){
                for(int l = k + 1; l < m; l++){
                    for(int t = l + 1; t < m; t++){
                        ans = max(ans, arr[i] * arr[j] * arr[k] * arr[l] * arr[t]);
                    }
                }
            }
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