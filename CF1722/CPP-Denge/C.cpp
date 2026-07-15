#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
string s[5][N];

void solve(){
	int n; cin >> n;
    map<string, vector<int>> mp;
    vector<int> ans(4, 0);
    set<string> st;
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= n; j++){
            cin >> s[i][j];
            mp[s[i][j]].push_back(i);
            st.insert(s[i][j]);
        }
    }
    for(string s : st){
        if(mp[s].size() == 1){
            ans[mp[s][0]] += 3;
        }
        else if(mp[s].size() == 2){
            ans[mp[s][0]] += 1;
            ans[mp[s][1]] += 1;
        }
    }
    cout << ans[1] << ' ' << ans[2] << ' ' << ans[3] << '\n';
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