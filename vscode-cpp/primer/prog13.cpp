#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;
// "---------------------------------------------------------------------------------------"
class HasPtr
{
    friend void swap(HasPtr &, HasPtr &);
    friend bool operator<(const HasPtr &, const HasPtr &);

public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0), use(new size_t(1)) {}
    HasPtr(const HasPtr &);
    // HasPtr &operator=(const HasPtr &);
    HasPtr(HasPtr &&p) noexcept : ps(p.ps), i(p.i), use(p.use) { p.ps = 0; }
    HasPtr &operator=(HasPtr);
    string &getPS()
    {
        return *ps;
    }
    ~HasPtr()
    {
        if (--*use == 0)
        {
            delete ps;
            delete use;
        }
    }

private:
    string *ps;
    int i;
    size_t *use;
};
HasPtr::HasPtr(const HasPtr &HP) : ps(new string(*HP.ps)), i(HP.i), use(new size_t(1)) {}
// HasPtr::HasPtr(const HasPtr &HP) : ps(HP.ps), i(HP.i), use(HP.use) { ++*use; }
/* HasPtr &HasPtr::operator=(const HasPtr &rhs)
{
    ++*rhs.use;
    if (--*use == 0)
    {
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
} */
HasPtr &HasPtr::operator=(HasPtr rhs)
{
    swap(*this, rhs);
    return *this;
}
inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    cout << "SWAP" << endl;
}
bool operator<(const HasPtr &lhs, const HasPtr &rhs)
{
    return *lhs.ps < *rhs.ps;
}
// "---------------------------------------------------------------------------------------"
struct X
{
public:
    X() { cout << "X()" << endl; }
    X(const X &) { cout << "X(const X&)" << endl; }
    X &operator=(const X &)
    {
        cout << "X &operator=" << endl;
        return *this;
    }
    ~X() { cout << "~X()" << endl; }
};
// "---------------------------------------------------------------------------------------"
class numbered
{
public:
    numbered()
    {
        init += 2;
        mysn = init;
    }
    numbered(const numbered &)
    {
        init += 2;
        mysn = init;
    }
    int mysn;
    static int init;
};
// "---------------------------------------------------------------------------------------"
int numbered::init = 2012;
// "---------------------------------------------------------------------------------------"
class Employee
{
public:
    Employee() : Em_name("_"), Em_id(ID++) {}
    Employee(const string &s) : Em_name(s), Em_id(ID++) {}
    Employee(const Employee &) = delete;
    Employee &operator=(const Employee &) = delete;

private:
    string Em_name;
    unsigned Em_id;
    static unsigned ID;
};
unsigned Employee::ID = 1;
// "---------------------------------------------------------------------------------------"
class TreeNode
{
public:
    TreeNode() : value(string()), count(new int(1)), left(nullptr), right(nullptr) {}
    TreeNode(const TreeNode &);
    TreeNode &operator=(const TreeNode &);
    ~TreeNode()
    {
        if (--*count == 0)
        {
            delete count;
            delete left;
            delete right;
        }
    }

private:
    string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};
TreeNode::TreeNode(const TreeNode &tn) : value(tn.value), count(tn.count), left(tn.left), right(tn.right) { ++*count; }
TreeNode &TreeNode::operator=(const TreeNode &tn)
{
    ++*tn.count;
    if (--*count == 0)
    {
        delete count;
        delete left;
        delete right;
    }
    count = tn.count;
    value = tn.value;
    left = tn.left;
    right = tn.right;
    return *this;
}
// "---------------------------------------------------------------------------------------"
class BinStrTree
{
public:
    BinStrTree() : root(new TreeNode()) {}
    BinStrTree(const BinStrTree &bst) : root(bst.root) {}
    BinStrTree &operator=(const BinStrTree &);
    ~BinStrTree()
    {
        delete root;
    }

private:
    TreeNode *root;
};
BinStrTree &BinStrTree::operator=(const BinStrTree &bst)
{
    auto newbst = new TreeNode(*bst.root);
    delete root;
    root = newbst;
    return *this;
}
// "---------------------------------------------------------------------------------------"
void Foo(X &, X);
// "---------------------------------------------------------------------------------------"
void f(numbered);
// "---------------------------------------------------------------------------------------"
class Message;

class Folder
{
public:
    void addMsg(Message *);
    void remMsg(Message *);

private:
    set<Message *> messages;
};
void Folder::addMsg(Message *m)
{
    messages.insert(m);
}
void Folder::remMsg(Message *m)
{
    messages.erase(m);
}
// "---------------------------------------------------------------------------------------"
class Message
{
    friend class Folder;
    friend void swap(Message &, Message &);

public:
    explicit Message(const string &str = "") : contents(str) {}
    Message(const Message &);
    Message(Message &&);
    Message &operator=(const Message &);
    Message &operator=(Message &&);
    ~Message();

    void move_Folders(Message *);

    void sava(Folder &);
    void remove(Folder &);
    void addFolder(Folder *);
    void delFolder(Folder *);

private:
    string contents;
    set<Folder *> folders;
    void add_to_Folders(const Message &);
    void remove_from_Folders();
};
void Message::sava(Folder &f)
{
    folders.insert(&f);
    f.addMsg(this);
}
void Message::remove(Folder &f)
{
    folders.erase(&f);
    f.remMsg(this);
}
void Message::addFolder(Folder *f)
{
    folders.insert(f);
}
void Message::delFolder(Folder *f)
{
    folders.erase(f);
}

void Message::move_Folders(Message *m)
{
    folders = std::move(m->folders);
    for (auto f : folders)
    {
        f->remMsg(m);
        f->addMsg(this);
    }
    m->folders.clear();
}

void Message::add_to_Folders(const Message &m)
{
    for (auto f : m.folders)
    {
        f->addMsg(this);
    }
}
Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
{
    add_to_Folders(m);
}
Message::Message(Message &&m) : contents(std::move(m.contents))
{
    move_Folders(&m);
}
void Message::remove_from_Folders()
{
    for (auto f : folders)
    {
        f->remMsg(this);
    }
}
Message::~Message()
{
    remove_from_Folders();
}
Message &Message::operator=(const Message &rhs)
{
    remove_from_Folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}
Message &Message::operator=(Message &&rhs)
{
    if (this != &rhs)
    {
        remove_from_Folders();
        contents = std::move(rhs.contents);
        move_Folders(&rhs);
    }
    return *this;
}
void swap(Message &lhs, Message &rhs)
{
    using std::swap;
    for (auto f : lhs.folders)
    {
        f->remMsg(&lhs);
    }
    for (auto f : rhs.folders)
    {
        f->remMsg(&rhs);
    }
    swap(lhs.contents, rhs.contents);
    swap(lhs.folders, rhs.folders);
    for (auto f : lhs.folders)
    {
        f->addMsg(&lhs);
    }
    for (auto f : rhs.folders)
    {
        f->addMsg(&rhs);
    }
}
// "---------------------------------------------------------------------------------------"
int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    // int &&rr1 = 42;
    // int &&rr2 = r1;
    // int &&rr3 = std::move(rr1);
    //这是一个注释
    cout << "----------------------------------------------" << endl;
    HasPtr hp1("hp1");
    HasPtr hp2("hp2");
    swap(hp1, hp2);
    cout << hp1.getPS() << endl;
    cout << hp2.getPS() << endl;
    vector<HasPtr> hpv{hp1, hp2};
    hpv.push_back(HasPtr("hp3"));
    sort(hpv.begin(), hpv.end());
    for (auto h : hpv)
    {
        cout << h.getPS() << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
    cout << "----------------------------------------------" << endl;
    X x1, x2;
    cout << "-----" << endl;
    Foo(x1, x2);
    cout << "-----" << endl;
    x1 = x2;
    cout << "-----" << endl;
    X x3 = x2;
    cout << "-----" << endl;
    X *x4 = new X();
    cout << "-----" << endl;
    delete x4;
    cout << "----------------------------------------------" << endl;
    return 0;
}
// "---------------------------------------------------------------------------------------"
void Foo(X &x1, X x2)
{
    vector<X> Xvec{x1, x2};
}
// "---------------------------------------------------------------------------------------"
void f(numbered s)
{
    cout << s.mysn << endl;
}
// "---------------------------------------------------------------------------------------"