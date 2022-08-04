class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if (root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int maxi=INT_MIN;
            vector<int>b;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* noda=q.front();
                q.pop();
                if (noda->val>maxi){
                    maxi=noda->val;
                }
                if(noda->left!=NULL)q.push(noda->left);
                if(noda->right!=NULL)q.push(noda->right);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};
