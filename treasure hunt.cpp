/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;

        long long fullCycles = a / (x + y);
        long long total = fullCycles * (x + y);

        if (total + x > a)
            cout << "NO\n";  // B wins
        else
            cout << "YES\n"; // K wins
    }

    return 0;
}
