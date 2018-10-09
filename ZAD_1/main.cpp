#include <iostream>
#include <cstring>

using namespace std;

class CTable{

private:
  string s_name;
  int *array;
  int DEFAULT_ARRAY_SIZE = 10;

public:

  void change_array_size(int NEW_SIZE);
  void set_array_pos(int VALUE,int POS);
  int ret_array_pos(int POS);
  

};

void CTable::change_array_size(int NEW_SIZE){

  int *new_array = new int[NEW_SIZE];

  for( int i = 0; i < DEFAULT_ARRAY_SIZE; i++){
    new_array[i] = this->array[i];
  }

  this->array = new_array;
}






int main(int argc, char const *argv[]) {

  cout<<"Yo"<<endl;


  return 0;
}
