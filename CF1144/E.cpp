#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int a[N], b[N];

void solve(){
    int n; cin >> n;
    string s, t; cin >> s >> t;
    for(int i = 1; i <= n; i++){
        a[i] = s[i - 1] - 'a';
        b[i] = t[i - 1] - 'a';
    }
    for(int i = n; i >= 1; i--){
        a[i] += b[i];
        a[i - 1] += a[i] / 26;
        a[i] %= 26;
    }
    for(int i = 0; i <= n; i++){
        int rem = a[i] % 2;
        a[i] /= 2;
        a[i + 1] += rem * 26;
    }
    for(int i = 1; i <= n; i++){
        cout << char(a[i] + 'a');
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}