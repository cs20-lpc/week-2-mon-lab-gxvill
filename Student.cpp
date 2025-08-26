#include "Student.hpp"
#include <iostream>

Student::Student() {
  name = new std::string("");
  age = new int(0);
  std::cout << "Student object created!" << std::endl;
}

Student::~Student(){
  delete name;
  delete age;
  std::cout << "Student object destroyed!" << std::endl;
}

void Student::setName(std::string s){
  if (name){
    *name = s;
  }
}
void Student::setAge(int a){
  if (age && a >= 0){
    *age = a;
  }
}
std::string Student::getName()const{
  return *name;
}
int Student::getAge() const {
  return *age;
}
