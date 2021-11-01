#include <string>
#include "cl_flag.h"

int main(int argc, char* argv[]){
    parser Parser;
    int itr;
    bool boolean;
    std::string container;
    Parser.i_flag(itr, "itr" , 0, "This is a test of int flag subroutine");
    Parser.b_flag(boolean, "boolean", false, "This is a test of the bool flag subroutine");
    Parser.c_flag(container, "string", "",  "This is a test of the string flag subroutine");
    return 0;
}
