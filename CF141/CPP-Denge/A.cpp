#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1, s2, s; cin >> s1 >> s2 >> s;
    if(s1.size() + s2.size() != s.size()){
        cout << "NO" << '\n';
        return;
    }
    map<char, int> cnt;
    for(char c : s) cnt[c]++;
    for(char c : s1){
        if(cnt[c] == 0){
            cout << "NO" << '\n';
            return;
        }
        cnt[c]--;
    }
    for(char c : s2){
        if(cnt[c] == 0){
            cout << "NO" << '\n';
            return;
        }
        cnt[c]--;
    }
    cout << "YES" << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}