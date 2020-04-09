//
//  main.cpp
//  CountingElements
//
//  Created by Redouane Bouzekri on 4/9/20.
//  Copyright © 2020 Redouane Bouzekri. All rights reserved.
// Problem set :
//Given an integer array arr, count element x such that x + 1 is also in arr.
//If there're duplicates in arr, count them seperately.

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int countElements(vector<int>& arr) {
       map<int,int> counters;
   for(int i = 0; i < arr.size();i++){
       //if(counters[arr[i]] != 0){
           counters[arr[i]] += 1;
       
   }
   int counter = 0, result = 0;
   int m=0,mk=0;
   for(auto p : counters){
       if(counter == 0){
           m = p.first;
           mk = p.second;
       }else{
           if(p.first == m + 1){
               
                   result += mk;
              
           }
           m = p.first;
           mk = p.second;
       }
       
       counter++;
   }
   
   return result;
   }

int main(int argc, const char * argv[]) {

    vector<int> sample{1,3,2,3,5,0};
    cout << countElements(sample) << endl;
    
    return 0;
}
