// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end()); 
        int l = 0, r = arr.size() - 1;

        while (l < r) {
            int sum = arr[l] + arr[r];
            if (sum == 0) {
                ans.push_back({arr[l], arr[r]});
                int leftVal = arr[l], rightVal = arr[r];
                while (l < r && arr[l] == leftVal) l++;
                while (l < r && arr[r] == rightVal) r--;
            } else if (sum < 0) {
                l++;
            } else {
                r--;
            }
        }
        
        return ans;
    }
};