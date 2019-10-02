// controller.h:
// execute instructions
#ifndef EXECUTER_H
#define EXECUTER_H

#include <string>
#include "loader.h"
#include "memory.h"

class controller {
    memory * memo;
    loader * ld;
    reg *regs;
    // current line number being processed
    int line_num;
    void exec_code(string opecode, string res);
public:
    //constructor
    controller(loader* l, memory* m, reg *r);

    bool exec_step();

};


#endif