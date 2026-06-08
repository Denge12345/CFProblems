#include <bits/stdc++.h>
using namespace std;

int cnt[26];

void solve(){
	string s; cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++) cnt[s[i] - 'a']++;
    vector<int> odd;
    for(int i = 0; i < 26; i++){
    	if(cnt[i] & 1) odd.push_back(i);
    }
    int m = odd.size();
    for(int i = 0; i < m / 2; i++){
    	cnt[odd[i]]++;
    	cnt[odd[m - 1 - i]]--;
    }
    string half = "";
    for(int i = 0; i < 26; i++){
    	half += string(cnt[i] / 2, 'a' + i);
    }
    int mid = -1;
    if(n % 2 == 1){
        for(int i = 0; i < 26; i++){
            if(cnt[i] & 1){
                mid = i;
                break;
            }
        }
    }
    string ans = half;
    if(mid != -1) ans += (char)(mid + 'a');
    reverse(half.begin(), half.end());
    ans += half;
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