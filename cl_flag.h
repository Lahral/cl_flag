#ifndef CL_FLAG_H
#define CL_FLAG_H

#include <vector>
#include <unordered_map>
#include <string>



enum command_type{
  integer,
  string,
  boolean
};

template<class generic_Type> struct command_struct {
  generic_Type& destination;
  generic_Type value;
  std::string flag;
  std::string help_value;
  command_type type;
  command_struct(generic_Type &source, generic_Type default_value, std::string marker, std::string help, command_type ty)
		 : destination{source}
		 , value{default_value}
		 , flag{marker}
		 , help_value{help}
		 , type{ty}
		 {};
};

class parser{
    std::vector<command_struct<int>> int_command_list;
    std::vector<command_struct<bool>> bool_command_list;
    std::vector<command_struct<std::string>> string_command_list;
public:
  void i_flag(int& source, std::string flag, int default_value, std::string help_value);
  void b_flag(bool& source, std::string flag, bool default_value, std::string help_value);
  void c_flag(std::string& source, std::string flag, std::string default_value, std::string help_value);

    int parse(int argc, char* argv[]);
    void help();
};

#endif //CL_FLAG_H
