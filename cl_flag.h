#ifndef CL_FLAG_H
#define CL_FLAG_H

#include <string>
#include <vector>
struct command_struct{
    const void* destination;
    const uint64_t* value;
    const std::string help_value;
};

class parser{
    std::vector<command_struct> command_list;
public:
    void i_flag(int& source, char* flag, int default_value, std::string help_value);
    void b_flag(int& source, char* flag, bool default_value, std::string help_value);
    void c_flag(int& source, char* flag, char* default_value, std::string help_value);

    int parse();
};

#endif //CL_FLAG_H
