#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(s[i] != s[i - 1]) cnt++;
    }
    if(s[0] != s[n - 1] && cnt != n){
        cnt++;
    }
    cout << cnt << '\n';
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