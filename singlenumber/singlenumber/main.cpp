//
//  main.cpp
//  singlenumbers
//
//  Created by Redouane Bouzekri on 4/9/20.
//  Copyright © 2020 Redouane Bouzekri. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>


using namespace std;
int singleNumber(vector<int>& nums) {
  map<int,int> store;
      for(int i = 0; i < nums.size();i++)
              store[nums[i]]++;
      for(auto i : store)
          if(i.second == 1)
              return i.first;
    return 0;
}

int main(){
    
    vector<int> exapmle{4,1,2,1,2};
    
    cout << singleNumber(exapmle) << endl;
    
    return 0;
}

