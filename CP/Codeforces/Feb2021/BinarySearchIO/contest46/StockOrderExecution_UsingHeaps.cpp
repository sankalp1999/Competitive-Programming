#include <bits/stdc++.h>
using namespace std;



int solve(vector<vector<int>>& orders) {
    // buy order if sell order with price <= 0
    // sell order if buy order with >= 1

    priority_queue<pair<int,int>> buy; // max heap
    priority_queue<pair<int,int>> sell;// min heap
    // By inverting the sign, max heap can be converted to a min heap.

    int count = 0;
    for(int i = 0; i < (int)orders.size(); i++)
    {
        if(orders[i][2] == 0)
        {
            buy.push({orders[i][0], orders[i][1]});
        }
        else if(orders[i][2] == 1)
        {
            sell.push({-orders[i][0], orders[i][1]});
        }

        while(!buy.empty() && !sell.empty())
        {
            int ab = buy.top().second;
            int as = sell.top().second;
            int pb = buy.top().first;
            int ps = -sell.top().first;

            if(pb < ps)
                break;
            count += min(ab, as);
            buy.pop();
            sell.pop();
            if(ab == as)
            {
                // pass
            }
            else if(ab > as)
            {
                buy.push({pb, ab - as});
            }
            else
            {
                sell.push({-ps, as - ab});
            }
        }
    }
    return count;
}

int main()
{
    return 0;
}