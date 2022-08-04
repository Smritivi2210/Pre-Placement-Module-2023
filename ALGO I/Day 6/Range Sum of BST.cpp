class Solution {
public:
    int s=0;
    void answer(TreeNode* root, int low, int high){
        if(root==NULL)return;
        answer(root->left,low,high);
        if(root->val>=low && root->val<=high)
            s=s+root->val;
        answer(root->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        answer(root,low,high);
        return s;
    }
};
