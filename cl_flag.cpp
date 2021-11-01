#include "cl_flag.h"

#include <iostream>

void parser::i_flag(int& source, std::string flag, int default_value, std::string help_value){
    command_struct command = command_struct(source, default_value, flag, help_value, command_type::integer);
    int_command_list.emplace_back(command);
    return;
}

void parser::b_flag(bool& source, std::string flag, bool default_value, std::string help_value){
    command_struct command = command_struct(source, default_value, flag, help_value, command_type::boolean);
    bool_command_list.emplace_back(command);
    return;
}

void parser::c_flag(std::string& source, std::string flag, std::string default_value, std::string help_value){
    command_struct command = command_struct(source, default_value, flag, help_value, command_type::string);
    string_command_list.emplace_back(command);
    return;
}


// error coding:
// 0 -- everything is alright
// 1 -- error
int parser::parse(int argc, char* argv[]){
    return 0;
}

// just prints all the help_values in the command_list
void parser::help(){

}
