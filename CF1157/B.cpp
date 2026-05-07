#include <bits/stdc++.h>
using namespace std;

const int N = 15;
int f[N];

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 1; i <= 9; i++) cin >> f[i];
    int l = 0;
    while(l < n && f[s[l] - '0'] <= s[l] - '0') l++;
    if(l == n){
        cout << s << '\n';
        return;
    }
    int r = l;
    while(r < n && f[s[r] - '0'] >= s[r] - '0') r++;
    for(int i = l; i < r; i++) s[i] = (char)(f[s[i] - '0'] + '0');
    cout << s << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}