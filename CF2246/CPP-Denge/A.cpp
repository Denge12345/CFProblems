#include <bits/stdc++.h>
using namespace std;

const int N = 55;
int p[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i += 2){
        p[i] = i + 1;
        p[i + 1] = i;
    }
    for(int i = 1; i <= n; i++){
        cout << p[i] << ' ';
    }
    cout << '\n';
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