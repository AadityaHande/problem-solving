#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double findOptimumCost(tuple<int, int, int> L, vector<pair<int, int>> pts, int n) {
        int a = get<0>(L), b = get<1>(L), c = get<2>(L);

        double x0, y0;
        if (b != 0) {
            x0 = 0.0;
            y0 = - (double)c / b;
        } else {
            y0 = 0.0;
            x0 = - (double)c / a;
        }

        double dx = (double)b;
        double dy = -(double)a;
        double d2 = dx*dx + dy*dy; 
        
        auto totalDist = [&](double t) {
            double px = x0 + dx * t;
            double py = y0 + dy * t;
            double sum = 0.0;
            for (int i = 0; i < n; ++i) {
                double xi = pts[i].first;
                double yi = pts[i].second;
                double dxp = px - xi;
                double dyp = py - yi;
                sum += sqrt(dxp*dxp + dyp*dyp);
            }
            return sum;
        };

        double tmin = 1e18, tmax = -1e18;
        for (int i = 0; i < n; ++i) {
            double xi = pts[i].first;
            double yi = pts[i].second;
            double num = (xi - x0) * dx + (yi - y0) * dy;
            double ti = num / d2;
            tmin = min(tmin, ti);
            tmax = max(tmax, ti);
        }

        double pad = max(1.0, (tmax - tmin) * 0.5 + 1.0);
        double lo = tmin - pad;
        double hi = tmax + pad;

        for (int iter = 0; iter < 100; ++iter) {
            double m1 = lo + (hi - lo) / 3.0;
            double m2 = hi - (hi - lo) / 3.0;
            double f1 = totalDist(m1);
            double f2 = totalDist(m2);
            if (f1 > f2) lo = m1;
            else hi = m2;
        }

        double ans = totalDist((lo + hi) / 2.0);
        // round to 2 decimal places as expected
        ans = round(ans * 100.0) / 100.0;
        return ans;
    }
};
