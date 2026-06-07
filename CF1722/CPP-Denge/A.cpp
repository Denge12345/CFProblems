#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
    string s; cin >> s;
    map<char, int> mp;
    for(char c : s) mp[c]++;
    if(mp['T'] != 1 || mp['i'] != 1 || mp['m'] != 1 || mp['u'] != 1 || mp['r'] != 1 || mp.size() != 5){
        cout << "NO" << '\n';
        return;
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