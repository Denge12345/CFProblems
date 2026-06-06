#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, p, q; cin >> n >> p >> q;
    string s; cin >> s;
    if(n == p + q){
        cout << 2 << '\n';
        cout << s.substr(0, p) << '\n';
        cout << s.substr(p, q) << '\n';
        return;
    }
    if(n % p == 0){
        cout << n / p << '\n';
        for(int i = 0; i < n; i += p){
            cout << s.substr(i, p) << '\n';
        }
        return;
    }
    if(n % q == 0){
        cout << n / q << '\n';
        for(int i = 0; i < n; i += q){
            cout << s.substr(i, q) << '\n';
        }
        return;
    }
    // n = xp + yq
    for(int x = 0; x * p <= n; x++){
        int rem = n - x * p;
        if(rem % q == 0){
            int y = rem / q;
            cout << x + y << '\n';
            for(int i = 0; i < x * p; i += p){
                cout << s.substr(i, p) << '\n';
            }
            for(int i = x * p; i < n; i += q){
                cout << s.substr(i, q) << '\n';
            }
            return;
        }
    }
    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();	
	}
    return 0;
}