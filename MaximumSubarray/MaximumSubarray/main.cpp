//
//  main.cpp
//  MaximumSubarray
//
//  Created by Redouane Bouzekri on 4/9/20.
//  Copyright © 2020 Redouane Bouzekri. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
       int holder = nums[0], sum=0;
       for(int i =0; i < nums.size();i++){
           sum = nums[i];
           if(sum > holder){
                   holder = sum;
               }
           for(int j = i+1; j < nums.size(); j++){
               sum+=nums[j];
               if(sum > holder){
                   holder = sum;
               }
           }
       }
       return holder;
   }
int main(int argc, const char * argv[]) {
    vector<int> sample{-2,1,-3,4,-1,2,1,-5,4};
    
    cout << "Max subarray : " << maxSubArray(sample) << endl;
    
    
    return 0;
}
