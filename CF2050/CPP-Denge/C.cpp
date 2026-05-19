#include <bits/stdc++.h>
using namespace std;

void solve(){
    //给定一个长度为 n 的数字串, 你可以进行任意次如下操作
    //选择里面的 2, 3 将其替换为 4, 9, 问能否得到被九整除的数字(0, 1没有修改的必要)
    //数字串中每个 2, 3 都可以选择改或者不改, 其修改后对数位和的贡献为 2 或 6
    //先算数位和, 然后统计里面有多少个 2 和 3, 紧接着算贡献
    string s; cin >> s;
    int cnt2 = 0, cnt3 = 0, sum = 0;
    for(char c : s){
        int num = c - '0';
        if(num == 2) cnt2++;
        else if(num == 3) cnt3++;
        sum += num;
    }
    if(sum % 9 == 0){
        cout << "YES" << '\n';
    }else{
        sum %= 9;
        //存在一种情况满足下列式子
        //(sum + x * 2 + y * 6) % 9 == 0
        //0 \leq x \leq cnt2, 0 \leq y \leq cnt3
        //0 2 4 6 8 1 3 5 7 0 2 4 6 8 1 3 5 7 0
        //0 6 3 0 6 3 0
        for(int x = 0; x <= min(cnt2, 8); x++){
            for(int y = 0; y <= min(cnt3, 2); y++){
                if((sum + x * 2 + y * 6) % 9 == 0){
                    cout << "YES" << '\n';
                    return;
                }
            }
        }
        cout << "NO" << '\n';
    }
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