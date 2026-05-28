#include <bits/stdc++.h>
using namespace std;

void solve(){
    // 给出一个数字 num 的二进制表示形式, n 位
    // 你可以选择任意一个位置进行反转操作, 求最少反转次数使得 num' % 10^x = 10^y
    int n, x, y; cin >> n >> x >> y;
    string s; cin >> s;
    string t = string(x, '0');
    t[x - y - 1] = '1';
    int ans = 0;
    for(int i = 0; i < x; i++){
        if(s[n - x + i] != t[i]) ans++;
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