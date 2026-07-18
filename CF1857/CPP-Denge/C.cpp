#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
    vector<int> b;
    for(int i = 0; i < (n * (n - 1)) / 2; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    for(int i = 0, j = 0; i < n - 1; i++){
        cout << b[j] << ' ';
        j += (n - 1 - i);
    }
    cout << 1000000000 << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
	cin >> t;
    while(t--){
        solve();
    }
    return 0;
}