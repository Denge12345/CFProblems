#include <bits/stdc++.h>
using namespace std;

void solve(){
    int cntA = 0, cntB = 0;
    string s; cin >> s;
    for(char c : s){
        if(c == 'A') cntA++;
        else cntB++;
    }
    cout << (cntA > cntB ? "A" : "B") << '\n';
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