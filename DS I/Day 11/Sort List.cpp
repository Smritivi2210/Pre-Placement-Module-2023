class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode* q=head;
        ListNode *p=head;
        while(q!=NULL){
            v.push_back(q->val);
            q=q->next;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int i=v.size()-1;
        while(p!=NULL){
            p->val=v[i];
            i--;
            p=p->next;
        }
        return head;
    }
};
