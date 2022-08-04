class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;
        TreeNode* s=0;
        queue<TreeNode* >q1;
        q1.push(root);
        while(!q1.empty()){
            TreeNode* n=q1.front();
            int r=n->val;
            q1.pop();
            if(r>p->val && r>q->val)q1.push(n->left);
            else if(r<p->val && r<q->val)q1.push(n->right);
            else{
                s=n;
                break;
            }
                
        }
        return s;
    }
};
