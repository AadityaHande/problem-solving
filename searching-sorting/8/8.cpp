class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int a = -1, cnt = 0;

        for (int x : arr) {
            if (cnt == 0) {
                a = x;
                cnt = 1;
            } else if (x == a) {
                cnt++;
            } else {
                cnt--;
            }
        }
        cnt = 0;
        for (int x : arr) {
            if (x == a) cnt++;
        }

        if (cnt > n / 2) return a;
        return -1;
    }
};
