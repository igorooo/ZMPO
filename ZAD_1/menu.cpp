#include <iostream>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#include "menu.h"
#include "ctable.h"

using namespace std;

void Menu::start_screen(){

  int OPT = 0;

  while( OPT != 9){

    system("clear");
    cout<<"To add object enter (1)"<<endl;
    cout<<"To check object's array length enter (2)"<<endl;
    cout<<"To remove object enter (3)"<<endl;
    cout<<"To remove all objects enter (4)"<<endl;
    cout<<"To set new name for object enter (5)"<<endl;
    cout<<"To add clone of object enter (6)"<<endl;
    cout<<"To get infos about object enter (7)"<<endl;
    cout<<"To set value in object's array enter (8)"<<endl;
    cout<<"To exit enter (9)"<<endl;

    cin>>OPT;

    switch ( OPT ) {
      case 1:
      this->add_obj();
      break;
      case 2:
      this->obj_array_len();
      break;
      case 3:
      this->rm_obj();
      break;
      case 4:
      this->rm_all_obj();
      break;
      case 5:
      this->set_obj_name();
      break;
      case 6:
      this->add_clone();
      break;
      case 7:
      this->get_info();
      break;
      case 8:
      this->set_val_in_array();
      break;
      case 9:
      return;
      break;
      default:
        cout<<"Wrong number! Try again"<<endl;
        sleep(3);
      break;
    }
  }
}

void Menu::add_obj(){

  system("clear");
  string S_NAME;
  int ARRAY_SIZE;

  cout<<"Please enter new object's name: ";
  cin>>S_NAME;

  cout<<"Please enter new object's array length: ";
  cin>>ARRAY_SIZE;

  if(ARRAY_SIZE < 0){
    cout<<"Only positive integers!";
    sleep(2);
    return;
  }

  else{
    this->TABLE.push_back(new CTable(S_NAME,ARRAY_SIZE));
    cout<<"Sucess"<<endl;
    sleep(3);
  }
}



void Menu::obj_array_len(){

  system("clear");

  cout<<"Please enter object's position: ";

  int POS;
  cin>>POS;

  if( POS >= this->TABLE.size() || POS < 0){
    cout<<"Wrong posiotion!"<<endl;
    sleep(2);
  }

  else{
    cout<<"Objest's array length is: "<<this->TABLE[POS]->ret_array_size()<<endl;
    sleep(3);
  }
}

void Menu::rm_obj(){

  system("clear");

  cout<<"Please enter object's position: ";

  int POS;
  cin>>POS;

  if( POS >= this->TABLE.size() || POS < 0){
    cout<<"Wrong posiotion!"<<endl;
    sleep(2);
  }

  else{
    this->TABLE.erase( TABLE.begin() + POS);
    cout<<"Success"<<endl;
    sleep(3);
  }
}

void Menu::rm_all_obj(){

  system("clear");
  this->TABLE.clear();
  cout<<"Success"<<endl;
  sleep(3);
}

void Menu::set_obj_name(){

  system("clear");

  cout<<"Please enter object's position: ";

  int POS;
  cin>>POS;

  if( POS >= this->TABLE.size() || POS < 0){
    cout<<"Wrong posiotion!"<<endl;
    sleep(2);
  }

  else{
    string S_NAME;
    cout<<"Please enter new object's name: ";
    cin>>S_NAME;
    this->TABLE[POS]->set_name(S_NAME);
    cout<<"Success"<<endl;

    sleep(3);
  }


}

void Menu::add_clone(){

  system("clear");

  cout<<"Please enter object's position: ";

  int POS;
  cin>>POS;

  if( POS >= this->TABLE.size() || POS < 0){
    cout<<"Wrong posiotion!"<<endl;
    sleep(2);
  }

  else{
    this->TABLE.push_back( new CTable( *(this->TABLE[POS]) ) );
    cout<<"Success"<<endl;
    sleep(3);
  }
}

void Menu::get_info(){

  system("clear");

  cout<<"Please enter object's position: ";

  int POS;
  cin>>POS;

  if( POS >= this->TABLE.size() || POS < 0){
    cout<<"Wrong posiotion!"<<endl;
    sleep(3);
  }

  else{
    cout<<this->TABLE[POS]->info()<<endl;
    sleep(4);
  }

}

void Menu::set_val_in_array(){

  system("clear");

  cout<<"Please enter object's position: ";

  int POS;
  cin>>POS;

  if( POS >= this->TABLE.size() || POS < 0){
    cout<<"Wrong posiotion!"<<endl;
    sleep(2);
  }

  else{
    int POS_, VAL;
    cout<<"Please enter position in array:";
    cin>>POS_;

    if(POS_ >= this->TABLE[POS]->ret_array_size() || POS_ < 0){
      cout<<"Wrong position!"<<endl;
      sleep(2);
    }
    else{
      cout<<"Please enter value: ";
      cin>>VAL;
      this->TABLE[POS]->set_array_pos(POS_,VAL);
      cout<<"Success"<<endl;
      sleep(3);
    }
  }

}

Menu::Menu(){
  this->start_screen();
}

Menu::~Menu(){
  this->TABLE.clear();
}
