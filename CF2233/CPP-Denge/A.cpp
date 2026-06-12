#include <bits/stdc++.h>
using namespace std;

void solve(){
	// n = x + y
    // n + z = x + 10 * y
    // (n + x + y - 1) / (x + y)
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    int t1 = (n + x + y - 1) / (x + y);
    int t2;
    if(x * z >= n){
        t2 = (n + x - 1) / n;
    }else{
        int r = n - x * z;
        t2 = z + (r + x + 10 * y - 1) / (x + 10 * y);
    }
    cout << min(t1, t2) << '\n';
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