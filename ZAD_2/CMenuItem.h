#include <iostream>
#include <cstring>

using namespace std;

class CMenuItem{

private:
  string S_COMMAND;
  string S_NAME;

public:

  virtual bool run();
  string ret_s_name();
  string ret_s_command();
  void s_show();

};
