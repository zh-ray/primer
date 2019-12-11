// 完成以下各个类的实现，可以自由的增删函数

/**
 * 终端操作上下文环境
class TerminalEnv
{
private:
    string m_curdir;

public:
};

class Command
{
public:
    virtual ~Command() {}
    virtual bool execute(TerminalEnv &env) = 0;
    virtual bool undo(TerminalEnv &env)
    {
        return true;
    }
};

class AddDirCommand : public Command
{
public:
    bool execute(TerminalEnv &env)
    {
    }
    bool undo(TerminalEnv &env)
    {
    }
};

class CDCommand : public Command
{
    bool execute(TerminalEnv &env)
    {
    }
    bool undo(TerminalEnv &env)
    {
    }
};

class AddFileCommand : public Command
{
    bool execute(TerminalEnv &env)
    {
    }
    bool undo(TerminalEnv &env)
    {
    }
};
 */