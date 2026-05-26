#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, s; cin >> m >> s;
    string mi = '1' + string(m - 1, '0');
    string mx = string(m, '9');
    if(m == 1 && s == 0){
        cout << 0 << ' ' << 0 << '\n';
        return;
    }
    if(s < 1 || s > 9 * m){
        cout << -1 << ' ' << -1 << '\n';
        return;
    }
    int mis = s - 1;
    for(int i = m - 1; i >= 0; i--){
        int add = min(9, mis);
        mi[i] += add;
        mis -= add;
    }
    int mxs = 9 * m - s;
    for(int i = m - 1; i >= 0; i--){
        int minus = min(9, mxs);
        mx[i] -= minus;
        mxs -= minus;
    }
    cout << mi << ' ' << mx << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}