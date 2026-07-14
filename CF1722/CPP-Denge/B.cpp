#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;
    for(int i = 0; i < n; i++){
        if(s1[i] == 'R' && (s2[i] == 'G' || s2[i] == 'B')){
            cout << "NO" << '\n';
            return;
        }
        if(s2[i] == 'R' && (s1[i] == 'G' || s1[i] == 'B')){
            cout << "NO" << '\n';
            return;
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