#include <bits/stdc++.h>
using namespace std;

const int N = 20;
int a[N];

void solve(){
	int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    bool ok = 0;
    for(int status = 0; status < (1 << n); status++){
        int angle = 0;
        for(int i = 0; i < n; i++){
            if(status & (1 << i)) angle += a[i];
            else angle -= a[i];
        }
        if((angle % 360 + 360) % 360 == 0){
            ok = 1;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
    	solve();	
	}
    return 0;
}