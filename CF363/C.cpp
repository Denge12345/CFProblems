#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    string ans;
    for(char c : s){
        int n = ans.size();
        if(n >= 2 && ans[n - 1] == c && ans[n - 2] == c) continue;
        else if(n >= 3 && ans[n - 2] == ans[n - 3] && ans[n - 1] == c) continue;
        else ans += c;
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