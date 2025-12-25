class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>result;   //creating a new vector for output
        preorder(root,result);   //recursive function calling
        return result;   //prints the output
    }
    void preorder(TreeNode* node,vector<int> &result){  //node= current tree node   result=stores value
        if(node==NULL){   //checks if current node accessed is empty or not
            return;
        }else{
        result.push_back(node->val);
        preorder(node->left,result);
        preorder(node->right,result);
        }
    }
};