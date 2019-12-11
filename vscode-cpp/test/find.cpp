#include <iostream>
#include <vector>

using namespace std;

struct Tree
{
    int val;
    struct Tree *left;
    struct Tree *right;

    Tree(int x) : val(x), left(NULL), right(NULL) {}
};
bool findTree(Tree *root, int target)
{
    if (root == NULL)
    {
        return false;
    }
    if (target == root->val)
    {
        return true;
    }
    else
    {
        if (root->left != NULL)
        {
            return findTree(root->left, target);
        }
        if (root->right != NULL)
        {
            return findTree(root->right, target);
        }
    }
    return false;
}