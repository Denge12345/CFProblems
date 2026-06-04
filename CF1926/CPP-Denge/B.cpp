#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool isTri = false;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(a[i][j] == '1') cnt++;
        }
        if(cnt == 1) isTri = true;
        else if(cnt > 1) break;
    }
    reverse(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(a[i][j] == '1') cnt++;
        }
        if(cnt == 1) isTri = true;
        else if(cnt > 1) break;
    }
    cout << (isTri ? "TRIANGLE" : "SQUARE") << '\n';
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