#include "cl_flag"

void main(int argc, char* argv[]){
    parser Parser;
    int* itr;
    bool* boolean;
    std::string* container;
    Parser.i_flag(&itr, "itr" , 0, std::string "This is a test of int flag subroutine");
    Parser.b_flag(&boolean, "boolean", false, std::string "This is a test of the bool flag subroutine");
    Parser.c_flag(&container, "string", "", std::string "This is a test of the string flag subroutine");
    return;
};
