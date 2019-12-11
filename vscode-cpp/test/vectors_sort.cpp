#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
class Solution {
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if (root != NULL)
        {
            dfs(root, expectNumber);
        }
        int sizes = result.size();
        vector<vector<int> > sorts(sizes, vector<int>(2));
        for (int i = 0; i < sizes; i++)
        {
            sorts[i][0] = result[i].size();
            sorts[i][1] = i;
        }
        sort(sorts.begin(), sorts.end(),greater<vector<int> >());
        for (int i = 0; i < sizes; i++)
        {
            output.push_back(result[sorts[i][1]]);
        }
        return output;
    }
private:
    vector<int> path;
    vector<vector<int> > result;
    vector<vector<int> > output;
    void dfs(TreeNode* root, int expectNumber)
    {
        path.push_back(root->val);
        if (expectNumber == root->val && root->left == NULL && root->right == NULL)
        {
            result.push_back(path);
        }
        else
        {
            if (root->left != NULL)
            {
                dfs(root->left, expectNumber - root->val);
            }
            if (root->right != NULL)
            {
                dfs(root->right, expectNumber - root->val);
            }
        }
        path.pop_back();
    }
};