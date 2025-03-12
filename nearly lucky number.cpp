/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;




int main(){
    
    long long n;
    cin >> n;

    string s = to_string(n);
    int luckyCount = 0;

    for (char c : s) {
        if (c == '4' || c == '7') {
            luckyCount++;
        }
    }

    string luckyCountStr = to_string(luckyCount);
    bool isNearlyLucky = true;

    for (char c : luckyCountStr) {
        if (c != '4' && c != '7') {
            isNearlyLucky = false;
            break;
        }
    }

    cout << (isNearlyLucky ? "YES" : "NO") << "\n";
    
    cout<<"\n";
    return 0;
}
