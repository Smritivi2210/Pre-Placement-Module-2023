class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        vector<int> v1;
    
        struct ListNode *p=head;
        while(p!=NULL){
            v.push_back(p->val);
            
            p=p->next;
            
        }
        v1=v;
        reverse(v1.begin(),v1.end());
        if (v1==v){
            return true;
        }else{
            return false;
        }
        
        
    }
};
