/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//My Solution
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (NULL == root)
            return 0;
        else
        {
            int left_depth = maxDepth(root->left);
            int right_depth = maxDepth(root->right);
            return left_depth > right_depth ? left_depth + 1 : right_depth + 1;
        }
    }
};


//other good solution

//Breadth-first-search
int maxDepth(TreeNode *root)
{
    if(root == NULL)
        return 0;

    int res = 0;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty())
    {
        ++ res;
        for(int i = 0, n = q.size(); i < n; ++ i)
        {
            TreeNode *p = q.front();
            q.pop();

            if(p -> left != NULL)
                q.push(p -> left);
            if(p -> right != NULL)
                q.push(p -> right);
        }
    }

    return res;
}

//Dept-first-search
int maxDepth(TreeNode *root)
{
    return root == NULL ? 0 : max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
}
