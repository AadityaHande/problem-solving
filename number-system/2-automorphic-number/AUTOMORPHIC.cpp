
class Solution {
  public:
    string is_AutomorphicNumber(int n) {
        // Code here
        int digit = n%10;
        int s=n*n;
        int sq=s%10;
        if(digit==sq){
            return "Automorphic";
        }else{
            return "Not Automorphic";
        }
    }
};