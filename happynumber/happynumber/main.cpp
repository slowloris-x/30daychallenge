//
//  main.cpp
//  happynumber
//
//  Created by Redouane Bouzekri on 4/9/20.
//  Copyright © 2020 Redouane Bouzekri. All rights reserved.
//

#include <iostream>
using namespace std;

int addition(int n){
       int m,res = 0;
      while(n!=0){
          m = n%10;
          res+=m*m;
          n=n/10;
      }
       return res;
  }
  bool isHappy(int n) {
      int counter = 0;
      while(true){
          n = addition(n);
          if(n == 1){
              return true;

          }
          if(counter == 100){
              return false;
              
          }
          counter++;
      }
  }

int main(int argc, const char * argv[]) {
 
    int sample = 19;
    if(isHappy(sample)){
        
        cout << "It is a happy number" << endl;
        
    }else{
        
        cout << "It is not" << endl;
    }
    
}
