#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int l = 1, r = n;
    string ans;
    stack<int> stk;
    stk.push(0);
    while(l <= r){
        int lst = stk.top();
        bool lok = (a[l] > lst);
        bool rok = (a[r] > lst);
        if(!lok && !rok) break;
        if(lok && rok){
            if(a[l] < a[r]){
                ans += 'L';
                stk.push(a[l++]);
            }else if(a[l] > a[r]){
                ans += 'R';
                stk.push(a[r--]);
            }else{
                int cntl = 0, cntr = 0;
                for(int i = l + 1; i <= r; i++){
                    if(a[i] > a[i - 1]) cntl++;
                    else break;
                }
                for(int i = r - 1; i >= l; i--){
                    if(a[i] > a[i + 1]) cntr++;
                    else break;
                }
                if(cntl >= cntr){
                    ans += 'L';
                    stk.push(a[l++]);
                }else{
                    ans += 'R';
                    stk.push(a[r--]);
                }
            }
        }else if(lok){
            ans += 'L';
            stk.push(a[l++]);
        }else{
            ans += 'R';
            stk.push(a[r--]);
        }
    }
    cout << ans.size() << '\n';
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}