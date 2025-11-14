#include <math.h>
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int a = -1, last = -1;
        for (int i=0; i<=arr.size();i++){
            if (arr[i]==x){
                a=i; break;
            }
        }
        for (int i=0;i<arr.size();i++){
            if (arr[i]==x){
                last=max(i,last);  
            }
        }
        return {a,last};
    }
};