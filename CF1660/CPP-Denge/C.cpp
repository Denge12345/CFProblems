#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	string s; cin >> s;
    set<char> st;
    int ans = 0;
    for(char c : s){
        if(st.count(c)){
            ans += 2;
            st.clear();
        }else{
            st.insert(c);
        }
    }
    cout << s.size() - ans << '\n';
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