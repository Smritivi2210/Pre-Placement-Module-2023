class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& A) {
        int i=0;
        return built(A,i,INT_MAX);
        
    }
    TreeNode* built(vector<int>&A,int &i,int bound){
        if(i==A.size() || A[i]>bound)return NULL;
        TreeNode* temp=new TreeNode(A[i++]);
        temp->left=built(A,i,temp->val);
        temp->right=built(A,i,bound);
        return temp;
    }
