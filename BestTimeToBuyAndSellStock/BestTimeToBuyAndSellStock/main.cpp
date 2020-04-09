//
//  main.cpp
//  BestTimeToBuyAndSellStock
//
//  Created by Redouane Bouzekri on 4/9/20.
//  Copyright © 2020 Redouane Bouzekri. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices) {
     int profit = 0;
    for(int i = 0; i < (int)prices.size()-1; i++)
        if(prices[i+1] > prices[i])
            profit+=(prices[i+1]-prices[i]);
  return profit;
  
   }

int main(int argc, const char * argv[]) {
    vector<int> sample{7,1,5,3,6,4};
    
    cout << "Max profit : " << maxProfit(sample) << endl;
    return 0;
}
