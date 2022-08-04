class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
        if(k==0)return head;
        ListNode* p=head;
        ListNode*q=head;
        int c=0;
        while(p!=NULL){
            c++;
            p=p->next;
        }
        int j=k%c ;
        
        
        int i=c-j;
        if(j==0)return head;
        while(i!=1){
            q=q->next;
            i--;
        }
        ListNode*u=q->next;
        ListNode*l=q->next;
        q->next=NULL;
        while(u->next!=NULL){
            u=u->next;
        }
        u->next=head;
        head=l;
        return head;
    }
};
