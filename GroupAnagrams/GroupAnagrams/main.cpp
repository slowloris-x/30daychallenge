//
//  main.cpp
//  GroupAnagrams
//
//  Created by Redouane Bouzekri on 4/9/20.
//  Copyright © 2020 Redouane Bouzekri. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
       set<pair<string, int>> jo;
       vector<string> bill = strs;
       vector<vector<string>> holder;
       for(int p = 0; p < strs.size();p++){
       sort(strs[p].begin(), strs[p].end());
       
       jo.insert(make_pair(strs[p], p));
   }
       sort(strs.begin(),strs.end());
   string as = "a1a";
       int counter = 0;
       for (auto p : jo)
  {
      if(p.first == as){
          holder[counter].push_back(bill[p.second]);
      }else{
          if(as!="a1a")
           counter++;
          holder.push_back({});
          holder[counter].push_back(bill[p.second]);
          as = p.first;
      }
  }
       
       
       return holder;
       
   }


int main(int argc, const char * argv[]) {
    vector<string> sample{"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = groupAnagrams(sample);
    for(int i = 0; i < ans.size();i++){
        for(int j = 0; j < ans[i].size();j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}
