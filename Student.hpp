#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

class Student {
private:
  std::string *name;
  int *age;

public:
  Student();
  ~Student();
  void setName(std::string);
  void setAge(int);
  std::string getName() const;
  int getAge() const;
};

#endif
