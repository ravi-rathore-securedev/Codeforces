/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/

/* 

*/


#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> candies(n);
    int total_weight = 0;

    for (int i = 0; i < n; i++) {
        cin >> candies[i];
        total_weight += candies[i];
    }

    if (total_weight % 2 != 0) {
        cout << "NO\n";
        return;
    }

    int half_weight = total_weight / 2;
    vector<bool> dp(half_weight + 1, false);
    dp[0] = true;

    for (int candy : candies) {
        for (int j = half_weight; j >= candy; j--) {
            dp[j] = dp[j] || dp[j - candy];
        }
    }

    cout << (dp[half_weight] ? "YES\n" : "NO\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
