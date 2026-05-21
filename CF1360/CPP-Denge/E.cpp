#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 55;
char mp[N][N];

void solve(){
	int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> mp[i][j];
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(mp[i][j] == '1'){
                if(mp[i + 1][j] != '1' && mp[i][j + 1] != '1'){
                    cout << "NO" << '\n';
                    return;
                }
            }
        }
    }
    cout << "YES" << '\n';
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