#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N];

void solve(){
    int n; cin >> n;
    map<int, int> cnt;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(const auto& i : cnt){
        if(i.second > 2){
            cout << "NO" << '\n';
            return;
        }
    }
    vector<int> inc, dec;
    for(const auto& i : cnt){
        if(i.second){
            inc.push_back(i.first);
            cnt[i.first]--;
        }
    }
    for(const auto& i : cnt){
        if(i.second){
            dec.push_back(i.first);
            cnt[i.first]--;
        }
    }
    reverse(dec.begin(), dec.end());
    cout << "YES" << '\n';
    cout << inc.size() << '\n';
    for(int x : inc){
        cout << x << ' ';
    } 
    cout << '\n';
    cout << dec.size() << '\n';
    for(int x : dec){
        cout << x << ' ';
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}