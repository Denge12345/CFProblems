#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N], pre[N], p[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n - 1; i++) cin >> a[i];
    int mi = 0, mx = 0;
    for(int i = 1; i <= n - 1; i++){
        pre[i] = pre[i - 1] + a[i];
        mi = min(mi, pre[i]);
        mx = max(mx, pre[i]);
    }
    if(mx - mi != n - 1){
        cout << -1 << '\n';
        return;
    }
    set<int> st;
    for(int i = 1; i <= n; i++){
        p[i] = 1 - mi + pre[i - 1];
        st.insert(p[i]);
    }
    if(st.size() != n){
        cout << -1 << '\n';
        return;
    }
    for(int i = 1; i <= n; i++){
        cout << p[i] << ' ';
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