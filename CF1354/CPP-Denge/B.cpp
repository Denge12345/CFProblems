#include <bits/stdc++.h>
using namespace std;

/*bool check(string s, int k){
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 0; i < k - 1; i++){
        if(s[i] == '1') cnt1++;
        else if(s[i] == '2') cnt2++;
        else cnt3++;
    }
    int r = k - 1, n = s.size();
    while(r < n){
        if(s[r] == '1') cnt1++;
        else if(s[r] == '2') cnt2++;
        else cnt3++;
        if(cnt1 >= 1 && cnt2 >= 1 && cnt3 >= 1){
            return true;
        }
        if(s[r - k + 1] == '1') cnt1--;
        else if(s[r - k + 1] == '2') cnt2--;
        else cnt3--;
        r++;
    }
    return false;
}

void solve(){
	string s; cin >> s;
    int n = s.size();
    int l = 3, r = n, ans = 0;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(check(s, mid)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout << ans << '\n';
}*/

void solve(){
    string s; cin >> s;
    int n = s.size();
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    int l = 0, ans = INT_MAX;
    for(int r = 0; r < n; r++){
        if(s[r] == '1') cnt1++;
        else if(s[r] == '2') cnt2++;
        else cnt3++;
        while(cnt1 && cnt2 && cnt3){
            ans = min(ans, r - l + 1);
            if(s[l] == '1') cnt1--;
            else if(s[l] == '2') cnt2--;
            else cnt3--;
            l++;
        }
    }
    cout << (ans == INT_MAX ? 0 : ans) << '\n';
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