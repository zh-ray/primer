#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL)
    {
    }
};

class Solution
{
public:
    string SerializeHelper(TreeNode *root)
    {
        string result = "";
        if (root == nullptr)
        {
            result += '#';
            result += '!';
            return result;
        }
        result += to_string(root->val);
        result += '!';
        result += SerializeHelper(root->left);
        result += SerializeHelper(root->right);
        return result;
    }
    char *Serialize(TreeNode *root)
    {
        string result = SerializeHelper(root);
        return (char *)result.c_str();
    }
    TreeNode *DeserializeHelper(stringstream &ss)
    {

        string str;
        getline(ss, str, '!');
        if (str == "#")
            return nullptr;
        else
        {
            int value = stoi(str);
            TreeNode *node = new TreeNode(value);
            node->left = DeserializeHelper(ss);
            node->right = DeserializeHelper(ss);
            return node;
        }
    }
    TreeNode *Deserialize(char *str)
    {
        stringstream ss(str);
        return DeserializeHelper(ss);
    }
};

int main ()
{

}