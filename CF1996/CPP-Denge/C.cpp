#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int pre1[26][N], pre2[26][N];

void solve(){
	int n, q; cin >> n >> q;
    string a, b; cin >> a >> b;
    a = ' ' + a, b = ' ' + b;
    for(int i = 0; i < 26; i++){
        for(int j = 0; j <= n; j++){
            pre1[i][j] = pre2[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        int c1 = a[i] - 'a';
        int c2 = b[i] - 'a';
        pre1[c1][i]++, pre2[c2][i]++;
    }
    for(int i = 0; i < 26; i++){
        for(int j = 1; j <= n; j++){
            pre1[i][j] += pre1[i][j - 1];
            pre2[i][j] += pre2[i][j - 1];
        }
    }
    while(q--){
        int l, r; cin >> l >> r;
        vector<int> cnta(26), cntb(26);
        for(int i = 0; i < 26; i++){
            cnta[i] = pre1[i][r] - pre1[i][l - 1];
            cntb[i] = pre2[i][r] - pre2[i][l - 1];
        }
        int cnt = 0;
        for(int i = 0; i < 26; i++){
            cnt += abs(cnta[i] - cntb[i]);
        }
        cout << cnt / 2 << '\n';
    }
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