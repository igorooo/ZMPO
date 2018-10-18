
virtual bool CMenuItem::run(){
  return 1;
}

string CMenuItem::ret_s_command(){
  return this->S_COMMAND;
}

string CMenuItem::ret_s_name(){
  return this->S_NAME;
}

void CMenuItem::show(){
  cout<<this->ret_s_name<<"("<<this->ret_s_command<<")"<<endl;
}
