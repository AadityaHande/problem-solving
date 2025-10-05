#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (1<=t<=6){
    while(t--){
        int x;
        cin >> x;
        if (x == 6)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    }
    return 0;
}
