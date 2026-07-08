#include <bits/stdc++.h>
using namespace std;

const int N = 10;
char mp[N][N];

void solve(){
    vector<int> red;
	for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
            cin >> mp[i][j];
            if(mp[i][j] == 'R'){
                red.push_back(i);
            }
        }
    }
    for(int i : red){
        bool ok = true;
        for(int j = 1; j <= 8; j++){
            if(mp[i][j] != 'R'){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << 'R' << '\n';
            return;
        }
    }
    cout << 'B' << '\n';
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