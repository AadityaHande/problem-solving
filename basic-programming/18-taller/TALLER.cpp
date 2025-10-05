#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x > y)
            cout << "A\n";
        else
            cout << "B\n";
    }
    return 0;
}
