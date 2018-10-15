#include <iostream>
#include <cstring>
#include <sstream>
#include "menu.h"
#include "ctable.h"

//g++ -o test main.cpp ctable.h ctable.cpp menu.h menu.cpp

using namespace std;


void  v_test(CTable cArg)
{
  cout<<"v_test ENTERED"<<endl;
  cArg.change_array_size(2);

}


int main(int argc, char const *argv[]) {



/*  CTable obj;
  cout<<obj.change_array_size(5)<<endl;

  v_test(obj);
  return 0;

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
  delete menu;


  return 0;
}
