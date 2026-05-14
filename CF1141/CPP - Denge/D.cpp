#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string l, r; cin >> l >> r;
    l = ' ' + l, r = ' ' + r;
    vector<vector<int>> posL(26), posR(26);
    vector<int> qL, qR;
    for(int i = 1; i <= n; i++){
        if(l[i] != '?') posL[l[i] - 'a'].push_back(i);
        else qL.push_back(i);
        if(r[i] != '?') posR[r[i] - 'a'].push_back(i);
        else qR.push_back(i);
    }
    vector<pair<int, int>> ans;
    for(int c = 0; c < 26; c++){
        while(!posL[c].empty() && !posR[c].empty()){
            ans.push_back({posL[c].back(), posR[c].back()});
            posL[c].pop_back(), posR[c].pop_back();
        }
    }
    for(int c = 0; c < 26 && !qR.empty(); c++){
        while(!posL[c].empty() && !qR.empty()){
            ans.push_back({posL[c].back(), qR.back()});
            posL[c].pop_back(), qR.pop_back();
        }
    }
    for(int c = 0; c < 26 && !qL.empty(); c++){
        while(!posR[c].empty() && !qL.empty()){
            ans.push_back({qL.back(), posR[c].back()});
            posR[c].pop_back(), qL.pop_back();
        }
    }
    while(!qL.empty() && !qR.empty()){
        ans.push_back({qL.back(), qR.back()});
        qL.pop_back(), qR.pop_back();
    }
    cout << ans.size() << '\n';
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].first << ' ' << ans[i].second << '\n';
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