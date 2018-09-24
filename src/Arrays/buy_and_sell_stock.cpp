#include <cfloat>

#include "../Headers/arrays.h"
#include "../Headers/utilities.h"

namespace Arrays
{
    // 6:30 -- Algo start, 7:30 -- code start
    void BuyAndSellStockOnce(const std::vector<double>& prices, double& profit)
    {
        double local_diff = 0, max_diff = DBL_MIN, diff = 0;
        for(int i = 0; i < prices.size()-1; i++)
        {
            diff = prices[i+1] - prices[i];
            if(diff >= 0)
            {
                local_diff += diff;
            }
            else
            {
                max_diff = std::max(max_diff, local_diff);
                local_diff = 0;
            }
        }
        profit = max_diff;
    }
} //namespace Arrays
