#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    vector<int> arr;
    for(char c : s){
        arr.push_back(c - 'a');
    }
    sort(arr.begin(), arr.end());
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != arr[i - 1] + 1){
            cout << "No" << '\n';
            return;
        }
    }
    cout << "Yes" << '\n';
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