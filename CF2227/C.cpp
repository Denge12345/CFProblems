#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& arr){
    for(int x : arr){
        cout << x << ' ';
    }
}

void solve(){
    int n; cin >> n;
    vector<int> arr1, arr2, arr3, arr4;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(x % 6 == 0) arr1.push_back(x);
        else if(x % 2 == 0 && x % 3 != 0) arr2.push_back(x);
        else if(x % 2 != 0 && x % 3 == 0) arr3.push_back(x);
        else arr4.push_back(x);
    }
    print(arr1), print(arr2), print(arr4), print(arr3);
    cout << '\n';
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