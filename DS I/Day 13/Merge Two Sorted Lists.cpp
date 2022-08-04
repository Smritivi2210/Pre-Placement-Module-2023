class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1=list1;
        ListNode* h2=list2;
        
        if(h1==NULL)return list2;
        if(h2==NULL)return list1;
        ListNode*u;
        ListNode* last;
        if(h1->val<h2->val){
            u=h1;
            last=u;
            h1=h1->next;
        }else if(h1->val>h2->val){
            u=h2;
            last=u;
            h2=h2->next;
        }else{
            u=h1;
            last=u;
            h1=h1->next;
        }
        while(h1!=NULL && h2!=NULL){
            if(h1->val<h2->val){
                last->next=h1;
                last=h1;
                h1=h1->next;
            }else if(h1->val>h2->val){
                last->next=h2;
                last=h2;
                h2=h2->next;
            }else{
                last->next=h1;
                last=h1;
                h1=h1->next;
            }
        }
        
        while(h1!=NULL){
            last->next=h1;
            last=h1;
            h1=h1->next;
        }
        while(h2!=NULL){
            last->next=h2;
            last=h2;
            h2=h2->next;
        }
        return u;
    }
};
