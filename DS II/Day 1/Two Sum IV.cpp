class Solution {
public:
    vector<int>ans;
    void findTarge(TreeNode* root) {
        
        if (root==NULL)return;
        findTarge(root->left);
        ans.push_back(root->val);
        findTarge(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        findTarge(root);
        int i = 0, j = ans.size()-1;
        
        while(i < j){
            int currSum = ans[i] + ans[j];
            if(currSum == k) return true;
            else if(currSum > k) j--;
            else i++;
        }
        return false;
    }
};
