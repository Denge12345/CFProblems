#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 4005;
string s;
vector<int> g[N];
int ans;

pair<int, int> dfs(int x, int fa){
    int b = (s[x] == 'B');
    int w = (s[x] == 'W');
    for(const int& y : g[x]){
        if(y == fa) continue;
        auto [nb, nw] = dfs(y, x);
        b += nb;
        w += nw;
    }
    if(b == w) ans++;
    return {b, w};
}

void solve(){
	int n; cin >> n;
    for(int i = 1; i <= n; i++){
        g[i].clear();
    }
    for(int i = 2; i <= n; i++){
        int x; cin >> x;
        g[i].push_back(x);
        g[x].push_back(i);
    }
    cin >> s;
    s = ' ' + s;
    ans = 0;
    dfs(1, 0);
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