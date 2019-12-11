#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> u_i; // 创建空智能指针
    u_i.reset(new int(3)); // 重置动态对象
    unique_ptr<int> u_i2(new int(4)); // 创建时指定对象
    // unique_ptr<T D> u(d);

    // int *p_i = u_i2.release(); // 释放所有权
    unique_ptr<string> u_s(new string("abc"));
    unique_ptr<string> u_s2 = move(u_s); // 转移所有权
    u_s2.reset(u_s.release()); // 转移所有权
    u_s2 = nullptr; // 显式销毁，等价 u_s2.reset()
}