#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
    vector<string> a(n);
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        string t = a[i];
        bool ok = 0;
        for(int len = 1; len < t.size(); len++){
            string left = t.substr(0, len);
            string right = t.substr(len);
            if(left == right){
                if(mp.count(left)){
                    ok = true;
                    break;
                }
            } else {
                if(mp.count(left) && mp.count(right)){ 
                    ok = true; 
                    break; 
                }
            }
        }
        cout << ok;
    }
    cout << '\n';
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