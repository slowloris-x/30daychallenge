//
//  main.cpp
//  movezeros
//
//  Created by Redouane Bouzekri on 4/9/20.
//  Copyright © 2020 Redouane Bouzekri. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n1 = (int)nums.size();
   nums.erase(
std::remove(nums.begin(), nums.end(), 0),
nums.end());
    int r = n1 - (int)nums.size();
    for(int i = 0; i < r; i++)
        nums.push_back(0);
    
}

int main(int argc, const char * argv[]) {
    vector<int> sample{0,1,0,3,12};
    moveZeroes(sample);
    for(auto i : sample)
        cout << i << " ";
    cout << endl;
    return 0;
}
