#include <bits/stdc++.h>
using namespace std;

bool isNum(string& s){
    if(s.size() == 0) return false;
    if(s == "0") return true;
    if(s[0] == '0') return false;
    for(char c : s){
        if(c < '0' || c > '9') return false;
    }
    return true;
}

void f(vector<string>& a, vector<string>& b, string& cur){
    if(isNum(cur)) a.push_back(cur);
    else b.push_back(cur);
    cur.clear();
}

string build(vector<string>& s){
    if(s.size() == 0) return "-";
    string res = "\"";
    for(int i = 0; i < s.size(); i++){
        if(i) res += ',';
        res += s[i];
    }
    res += '\"';
    return res;
}

void solve(){
	string s; cin >> s;
    vector<string> a, b;
    string cur;
    for(char c : s){
        if(c == ',' || c == ';') f(a, b, cur);
        else cur += c;
    }
    f(a, b, cur);
    cout << build(a) << '\n' << build(b) << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}