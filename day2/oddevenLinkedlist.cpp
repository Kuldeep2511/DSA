#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head; 
        
        ListNode* odd = head; 
        ListNode* even = head->next; 
        ListNode* evenHead = even;
        
        while (even && even->next) {
            odd->next = even->next; 
            odd = odd->next;        
            even->next = odd->next; 
            even = even->next;      
        }
        
        odd->next = evenHead; 
        return head;
    }
};


void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
   
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

   
    Solution sol;
    head = sol.oddEvenList(head);

    
    printList(head);

   

    return 0;
}
