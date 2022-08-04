class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int>r;
        vector<int>v;
        ListNode* temp=head;
        ListNode* p=head;
        while(temp!=NULL){
            if(temp->val<x){
                r.push_back(temp->val);
            }else if(temp->val>=x){
                v.push_back(temp->val);
            }
            temp=temp->next;
        }
        int i=0;
        int j=0;
        while(i<r.size() &&  p!=NULL){
            p->val=r[i++];
            p=p->next;
        }
        
        while(j<v.size() && p!=NULL){
            p->val=v[j++];
            p=p->next;
        }
        return head;
    }
};
