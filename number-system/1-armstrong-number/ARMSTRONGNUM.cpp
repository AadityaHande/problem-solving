#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int t,x;
    cin >> t;
    while (t--){
        cin>>x;
        int sum=0,y=x,r;
        
        while (x!=0){
            r=x%10;
            sum+=r*r*r;
            x/=10;
        }
        
        if (sum==y){
            cout << "YES" << endl;
        }
        
        else 
        cout << "NO" << endl;
    }
    
}
