#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9 + 7;
const int N = 2005;

int m, d;
int dp[N][N][2][2];
string s;
int len;

// 数位, 余数, 前导零, 奇偶
int dfs(int pos, int rem, bool candp, bool st, int p){
    if(pos == len){
        if(st) return rem == 0;
        return (d != 0);
    }
    if(!candp && dp[pos][rem][st][p] != -1){
        return dp[pos][rem][st][p];
    }
    int limit = candp ? (s[pos] - '0') : 9;
    int ans = 0;
    for(int digit = 0; digit <= limit; digit++){
        if(!st){
            if(digit == 0){
                // 前导零
                ans = (ans + dfs(pos + 1, rem, candp && (digit == limit), false, 0)) % mod;
            }else{
                // 第一个非零数字
                if(digit == d) continue;
                int nrem = (rem * 10 + digit) % m;
                // 下一个是偶数位
                ans = (ans + dfs(pos + 1, nrem, candp && (digit == limit), true, 1)) % mod;
            }
        }else{
            if(p == 0){
                if(digit == d) continue;
            }else{
                if(digit != d) continue;
            }
            int nrem = (rem * 10 + digit) % m;
            // 反转
            ans = (ans + dfs(pos + 1, nrem, candp && (digit == limit), true, p ^ 1)) % mod;
        }
    }
    if(!candp) dp[pos][rem][st][p] = ans;
    return ans;
}

int calc(const string& num){
    if(num.empty()) return 0;
    s = num;
    len = s.size();
    memset(dp, -1, sizeof(dp));
    return dfs(0, 0, true, false, 0);
}

void solve(){
    string a, b;
    cin >> m >> d >> a >> b;
    int i = a.size() - 1;
    while(i >= 0 && a[i] == '0') a[i--] = '9';
    a[i]--;
    if(a[0] == '0' && a.size() > 1){
        int st = 0;
        while(st < a.size() - 1 && a[st] == '0') st++;
        a = a.substr(st);
    }
    int ans = (calc(b) - calc(a) + mod) % mod;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();
	}
    return 0;
}