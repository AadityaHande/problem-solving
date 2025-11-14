// User function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        if (b<a&&a<c || c<a&&a<b) return a;
        else if (a<b&&b<c || c<b&&b<a) return b;
        else return c;
    }
};