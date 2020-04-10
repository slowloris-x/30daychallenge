//
//  main.cpp
//  MiddleoftheLinkedList
//
//  Created by Redouane Bouzekri on 4/10/20.
//  Copyright © 2020 Redouane Bouzekri. All rights reserved.
//

#include <iostream>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
    // ListNode(int x) : val(x), next(NULL) {}
 };


ListNode* middleNode(ListNode* head) {
    int counter = 0;
    ListNode* newhead = head;
    while(newhead != nullptr){
        newhead = newhead->next;
        counter++;
    }
    newhead = head;
    int co = 0;
      while(co < counter/2){
          ListNode* temp = new ListNode;
        
        head=head->next;
       temp=head;
        head = temp;
       co++;
    }
        
    
       return head;
        
}
int main(int argc, const char * argv[]) {
     ListNode* sample = new ListNode;
    sample->val = 1;
    sample->next = new ListNode;
    sample->next->val = 2;
    sample->next->next =  new ListNode;
    sample->next->next->val = 3;
    sample->next->next->next =  new ListNode;
    sample->next->next->next->val = 4;
    sample->next->next->next->next =  new ListNode;
    sample->next->next->next->next->val = 5;
    sample->next->next->next->next->next =  nullptr;
    
    ListNode* result = new ListNode;
    result = middleNode(sample);
    
    while(result != nullptr){
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;
    
    
    
    return 0;
}
