#include <iostream>
#include <cstring>
#include <sstream>
#include "ctable.h"

using namespace std;


int main(int argc, char const *argv[]) {

  cout<<"Yo"<<endl;
  CTable obj;
  cout<<obj.info()<<endl;

  CTable *obj1 = new CTable("piesek",5);

  cout<<obj1->info()<<endl;
  delete obj1;
  cout<<"pp"<<endl;



  return 0;
}
