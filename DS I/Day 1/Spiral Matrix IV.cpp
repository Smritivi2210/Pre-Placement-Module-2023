/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int mimi, int nini, ListNode* head) {
        vector<vector<int>> beboo(mimi,vector<int>(nini,-1));
        int dip=0,slip=0;
        mimi=mimi-1; nini=nini-1;
        while(dip<=mimi && slip<=nini && head){
            for(int ik=dip;ik<=nini && head!=NULL;ik++){
                int gipi=head->val;
                
            
                beboo[dip][ik]=gipi;
                head=head->next;
            }
            dip++;
            for(int il=dip;il<=mimi && head!=NULL;il++){
                int gipi=head->val;
                
        
                beboo[il][nini]=gipi;
                head=head->next;
            }
            nini--;
            if(dip<=mimi){
                for(int di=nini;di>=slip && head!=NULL;di--){
                    int gipi=head->val;
                
        
                    beboo[mimi][di]=gipi;
                    head=head->next;
                } mimi--;
            }
            if(slip<=nini){
                for(int di=mimi;di>=dip && head!=NULL;di--){
                    int gipi=head->val;
                
                
                    beboo[di][slip]=gipi;
                    head=head->next;
                }
                slip++;
            }
            
        }
        return beboo;
    }
};
