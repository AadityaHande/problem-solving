class Solution {
  public:
    bool isBuzz(int n) {
         return n % 10 == 7 || n % 7 == 0;
    }
};