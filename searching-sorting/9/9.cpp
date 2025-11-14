class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int i = 0;

        while (i < n) {
            if (arr[i] == x) return i;

            int diff = abs(arr[i] - x);
            int step = diff / k; 
            if (step == 0) step = 1;

            i += step;
        }

        return -1;
    }
};
