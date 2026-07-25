#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> cntl, cntr;
    for(char c : s){
        cntr[c]++;
    }
    int ans = 0;
    for(char c : s){
        cntl[c]++;
        if(--cntr[c] == 0){
            cntr.erase(c);
        }
        ans = max(ans, (int)(cntl.size() + cntr.size()));
    }
    cout << ans << '\n';
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