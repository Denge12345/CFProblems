#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll a[N];

void solve(){
	int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, [](int u, int v){
        return u > v;
    });
    ll alice = 0, bob = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(a[i] % 2 == 0) alice += a[i];
        }else{
            if(a[i] % 2 == 1) bob += a[i];
        }
    }
    cout << (alice == bob ? "Tie" : alice > bob ? "Alice" : "Bob") << '\n';
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