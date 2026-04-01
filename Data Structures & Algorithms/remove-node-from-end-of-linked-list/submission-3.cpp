class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> nodes; 
        ListNode* curr = head; 
        while(curr){
            nodes.push_back(curr); 
            curr = curr->next; 
        }
        int removeIndex = nodes.size() - n; 
        if(removeIndex == 0) return head->next; 
        nodes[removeIndex - 1]->next = nodes[removeIndex]->next; 
        return head; 
    }
};
