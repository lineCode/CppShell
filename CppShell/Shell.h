#ifndef _CSHELL_H
#define _CSHELL_H

class CShell
{
public:
    CShell();
    ~CShell();

    void exec(const std::string& cmd);
};

#endif