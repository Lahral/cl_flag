#ifndef CL_FLAG_H
#define CL_FLAG_H

#include <vector>
#include <cstdint>
#include <string>

class parser{
    enum command_type{
        integer,
        string,
        boolean
    };

    struct command_struct {
        void* destination;
        void* value;
        char* flag;
        std::string help_value;
        command_type type;
      command_struct(int* src, int* val, char* flag, std::string help, command_type type)
	: destination{src}
	, value{val}
	, flag{flag}
	, help_value{help}
	, type(type)
      {};
      command_struct(bool* src, bool* val, char* flag, std::string help, command_type type)
	: destination{src}
	, value{val}
	, flag{flag}
	, help_value{help}
	, type(type)
      {};
      command_struct(std::string* src, std::string* val, char* flag, std::string help, command_type type)
	: destination{src}
	, value{val}
	, flag{flag}
	, help_value{help}
	, type(type)
      {};
    };

    std::vector<command_struct> command_list;
public:
    void i_flag(int* source, char* flag, int default_value, std::string help_value);
    void b_flag(bool* source, char* flag, bool default_value, std::string help_value);
    void c_flag(std::string* source, char* flag, std::string default_value, std::string help_value);

    int parse(int argc, char* argv[]);
    void help();
};

#endif //CL_FLAG_H
