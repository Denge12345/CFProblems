#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    bool isNegative = s[0] == '-';
    bool isDecimal = false;
    for(char c : s){
        if(c == '.'){
            isDecimal = true;
            break;
        }
    }
    reverse(s.begin(), s.end());
    if(isNegative) s.pop_back();
    string ans;
    if(isDecimal){
        int decimalPos = s.find('.');
        string intPart = s.substr(decimalPos + 1);
        string decimalPart = s.substr(0, decimalPos);
        reverse(decimalPart.begin(), decimalPart.end());
        if(decimalPart.size() < 2) decimalPart += '0';
        else if(decimalPart.size() >= 2) decimalPart = decimalPart.substr(0, 2);
        for(int i = 0; i < intPart.size(); i++){    
            if(i > 0 && i % 3 == 0) ans += ',';
            ans += intPart[i];
        }
        reverse(ans.begin(), ans.end());
        ans += '.' + decimalPart;
    }else{
        for(int i = 0; i < s.size(); i++){
            if(i > 0 && i % 3 == 0) ans += ',';
            ans += s[i];
        }
        reverse(ans.begin(), ans.end());
        ans += ".00";
    }
    if(isNegative){
        cout << "($" << ans << ')' << '\n';
    }else{
        cout << '$' << ans << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}