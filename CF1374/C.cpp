#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    stack<char> stk;
    for(char c : s){
        if(c == ')'){
            if(!stk.empty() && stk.top() == '('){
                stk.pop();
            }else{
                stk.push(c);
            }
        }else{
            stk.push(c);
        }
    }
    
    cout << stk.size() / 2 << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}