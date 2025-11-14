class Solution {
  public:
    void printFloydTriangle(int n) {
        // Write Your Code here
        int a = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<< a <<" ";
                a++;    
            }
            cout<< "\n";
        }
    }
};