#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') cnt0++;
        else cnt1++;
    }
    if(cnt0 % 2){
        cout << cnt0 << '\n';
        for(int i = 0; i < n; i++){
            if(s[i] == '0') cout << i + 1 << ' ';
        }
        cout << '\n';
    }else if(cnt1 % 2 == 0){
        cout << cnt1 << '\n';
        if(cnt1 != 0){
            for(int i = 0; i < n; i++){
                if(s[i] == '1') cout << i + 1 << ' ';
            }
            cout << '\n';
        }
    }else{
        cout << -1 << '\n';
    }
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