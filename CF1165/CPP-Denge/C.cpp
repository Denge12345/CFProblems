#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
    string s; cin >> s;
    s = ' ' + s;
    string ans;
    for(int i = 1; i <= n; ){
        int j = i + 1;
        while(j <= n && s[j] == s[i]) j++;
        if(j > n){
            ans += s[i];
        }else{
            ans += s[i];
            ans += s[j];
        }
        i = j + 1;
    }
    if(ans.size() % 2 == 1) ans.pop_back();
    cout << s.size() - ans.size() - 1 << '\n';
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}