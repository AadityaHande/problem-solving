#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if ((x + y)<7)
            cout << "NO\n";
        else 
            cout << "YES\n";
    }
    return 0;
}