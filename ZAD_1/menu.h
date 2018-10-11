#ifndef _menu_h
#define _menu_h
#include <iostream>
#include <vector>
#include <cstdlib>
#include "ctable.h"

#endif


using namespace std;

class Menu{

private:

  vector <CTable*> TABLE;

public:
  void start_screen();
  void add_obj();
  void obj_array_len();
  void rm_obj();
  void rm_all_obj();
  void set_obj_name();
  void add_clone();
  void get_info();
  void set_val_in_array();
  void test_v();
  void v_test(CTable VAL);

  Menu();
  ~Menu();


};
