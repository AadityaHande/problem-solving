#include <bits/stdc++.h>
using namespace std;
int isHappy(int n) {
    set<int> s;
    while (n != 1) {
        int sum = 0;
        while (n) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        if (s.find(sum) != s.end()) return 0; 
        s.insert(sum);
        n = sum;
    }
    return 1;
}   
int main() {
    int n;
    cin >> n;
    cout << isHappy(n) << endl;
    return 0;
}
