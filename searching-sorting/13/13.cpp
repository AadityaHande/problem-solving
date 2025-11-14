class Solution {
  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        sort(arr, arr + n);
        long long cnt = 0;

        for (int i = 0; i < n - 2; ++i) {
            int l = i + 1;
            int r = n - 1;
            while (l < r) {
                long long s = arr[i] + arr[l] + arr[r];
                if (s < sum) {
                    cnt += (r - l);
                    ++l; 
                } else {
                    --r; 
                }
            }
        }

        return cnt;
    }
};
