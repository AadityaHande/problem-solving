class Solution {
  public:
    string belowTwenty[20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                              "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string thousands[4] = {"", "Thousand", "Million", "Billion"};

    string helper(int num) {
        if (num == 0) return "";
        else if (num < 20) return belowTwenty[num];
        else if (num < 100) return tens[num / 10] + (num % 10 ? " " + helper(num % 10) : "");
        else return belowTwenty[num / 100] + " Hundred" + (num % 100 ? " " + helper(num % 100) : "");
    }

    string convertToWords(int n) {
        if (n == 0) return "Zero";
        string result = "";
        int i = 0;
        while (n > 0) {
            int cur = n % 1000;
            if (cur != 0) {
                string part = helper(cur);
                if (!part.empty()) {
                    if (!result.empty()) result = part + " " + thousands[i] + " " + result;
                    else result = part + (thousands[i] != "" ? " " + thousands[i] : "");
                }
            }
            n /= 1000;
            i++;
        }
        // Remove trailing spaces
        while (!result.empty() && result.back() == ' ') result.pop_back();
        return result;
    }
};