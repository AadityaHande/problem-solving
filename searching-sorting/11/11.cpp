class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        vector<vector<int>> res;
        int n = arr.size();
        if (n < 4) return res;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n - 3; ++i) {
            if (i > 0 && arr[i] == arr[i-1]) continue;

            for (int j = i + 1; j < n - 2; ++j) {
                if (j > i + 1 && arr[j] == arr[j-1]) continue;

                int l = j + 1;
                int r = n - 1;

                int need = (int)target - arr[i] - arr[j];

                while (l < r) {
                    int cur = (int)arr[l] + arr[r];
                    if (cur == need) {
                        res.push_back({arr[i], arr[j], arr[l], arr[r]});

                        int lv = arr[l];
                        while (l < r && arr[l] == lv) ++l;

                        int rv = arr[r];
                        while (l < r && arr[r] == rv) --r;
                    }
                    else if (cur < need) {
                        ++l;
                    }
                    else {
                        --r;
                    }
                }
            }
        }

        return res;
    }
};
