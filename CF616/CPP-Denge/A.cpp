#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a, b; cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while(a.size() != 1 && a.back() == '0') a.pop_back();
    while(b.size() != 1 && b.back() == '0') b.pop_back();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if(a.size() < b.size()){
        cout << '<' << '\n';
    }else if(a.size() > b.size()){
        cout << '>' << '\n';
    }else{
        int n = a.size();
        for(int i = 0; i < n; i++){
            int na = a[i] - '0';
            int nb = b[i] - '0';
            if(na < nb){
                cout << '<' << '\n';
                return;
            }else if(na > nb){
                cout << '>' << '\n';
                return;
            }
        }
        cout << '=' << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
    	solve();	
	}
    return 0;
}