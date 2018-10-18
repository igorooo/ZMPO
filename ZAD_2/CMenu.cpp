

void CMenu::run(){

  int BOUND = this->VECTOR.size();

  cout<<"1. ";
  this->s_show();

  for(int i = 0; i < BOUND; i++){

    cout<<i+2<<". ";
    this->VECTOR[i]->s_show();

  }


}
