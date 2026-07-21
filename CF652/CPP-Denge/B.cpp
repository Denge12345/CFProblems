#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin() + 1, a.end());
    int p =  1, q = n;
    for(int i = 1; i <= n; i++){
        if(i & 1) cout << a[p++] << ' ';
        else cout << a[q--] << ' ';
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}