#include <iostream>
#include <cstring>
#include <sstream>
#include "menu.h"
#include "ctable.h"

//g++ -o test main.cpp ctable.h ctable.cpp menu.h menu.cpp

using namespace std;


int main(int argc, char const *argv[]) {


  /*
  CTable obj;
  cout<<obj.info()<<endl;

  CTable *obj1 = new CTable("piesek",5);

  cout<<obj1->info()<<endl;
  delete obj1;
  cout<<"pp"<<endl;

  CTable *OBJ = new CTable("piesek", 'a');
  cout<<OBJ->info()<<endl;
  delete OBJ; */

  Menu *menu = new Menu();


  return 0;
}
