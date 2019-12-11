#include <algorithm>
#include <iostream>
#include <map>
#include <stack>
#include <vector>
using namespace std;

stack<string> paths;                  // 记录当前的路径
map<string, vector<string>> files;    // 记录每个路径下的文件与目录名，两者以末尾“/”区分
stack<pair<string, string>> commands; // 记录执行成功的命令

// 在对应路径中寻找有无同名的文件或目录
bool finds(string name)
{
    auto iter = files.find(paths.top());
    if (iter != files.end())
    {
        if (find((iter->second).begin(), (iter->second).end(), name) == (iter->second).end())
        {
            (iter->second).push_back(name); // 将文件名或目录名添加到当前目录下
            return true;
        }
    }
    else
    {
        cout << "path is not existed!" << endl;
    }
    return false;
}

// 查找一级目录
bool cd_finds(string name)
{
    auto iter = files.find("/");
    if (find((iter->second).begin(), (iter->second).end(), name) == (iter->second).end())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int m;
    cin >> m;
    paths.push("/"); // 初始路径为“/”
    vector<string> temp;
    temp.clear();
    files.insert(make_pair("/", temp)); // 初始化
    for (int i = 0; i < m; ++i)
    {
        string first, second;
        first.clear();
        second.clear();
        cin >> first;
        if (first != "undo")
        {
            cin >> second;
        }
        if (first == "addfile")
        {
            if (second == "")
            {
                cout << "No file name!" << endl;
            }
            else if (finds(second))
            {
                cout << paths.top() + second << endl;
                commands.push(make_pair(first, second));
            }
            else
            {
                cout << "File exists" << endl;
            }
        }
        else if (first == "adddir")
        {
            if (second == "")
            {
                cout << "No dir name!" << endl;
            }
            else if (finds(second + "/"))
            {
                cout << paths.top() + second + "/" << endl;
                commands.push(make_pair(first, second + "/"));
                vector<string> temp;
                temp.clear();
                files.insert(make_pair(paths.top() + second + "/", temp));
            }
            else
            {
                cout << "File exists" << endl;
            }
        }
        else if (first == "cd")
        {
            if (second == "")
            {
                cout << "No dir name!" << endl;
            }
            else if (second == "..")
            {
                if (paths.top() == "/")
                {
                    cout << "No such dir." << endl;
                }
                else
                {
                    cout << "/" << endl;
                    paths.push("/");
                }
            }
            else if (cd_finds(second + "/"))
            {
                cout << "/" + second + "/" << endl;
                paths.push("/" + second + "/");
            }
            else
            {
                cout << "No such dir." << endl;
            }
        }
    }
    return 0;
}