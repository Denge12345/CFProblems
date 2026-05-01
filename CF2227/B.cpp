#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for(char c : s){
        if(c == '(') ans++;
        else ans--;
    }
    cout << (ans == 0 ? "YES" : "NO") << '\n';
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