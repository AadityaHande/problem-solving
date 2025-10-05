#include <bits/stdc++.h>
using namespace std;

int main() {
    int P, B, T;
    cin >> T;
    while(T--){
        cin >> P >> B;
        cout << min(P, B) << endl;
    }
    return 0;

}
