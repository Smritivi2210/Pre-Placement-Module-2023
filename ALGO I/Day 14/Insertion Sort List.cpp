class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
        ListNode* temp=head;
        ListNode*cur=head->next;
        while(cur){
            temp=head;
            while(temp && temp!=cur){
                if(temp->val>cur->val)swap(temp->val,cur->val);
                temp=temp->next;
            }
            cur=cur->next;
        }
        return head;
    }
};
