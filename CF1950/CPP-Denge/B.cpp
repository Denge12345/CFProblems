#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
	for(int i = 0; i < 2 * n; i++){
		for(int j = 0; j < 2 * n; j++){
			cout << ((i / 2 + (j / 2) & 1) ? '.' : '#');
		}
		cout << '\n';
	}
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